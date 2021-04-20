#include "libft.h"

static void	ft_free(char **arr, size_t size)
{
	while (size >= 0)
	{
		free(arr[size]);
		size--;
	}
	free(arr);
	arr = NULL;
}

static void	ft_createArr(char **arr, const char *s, char c, size_t nb)
{
	size_t	len;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	arr[nb] = NULL;
	while (i < nb)
	{
		while (s[j] && s[j] == c)
			++j;
		len = 0;
		while (s[j + len] && s[j + len] != c)
			++len;
		arr[i] = ft_substr(s, j, len);
		if (!arr[i])
		{
			ft_free(arr, nb);
			break ;
		}
		j = j + len;
		++i;
	}
}

static size_t	ft_count(const char *s, char c)
{
	size_t	nb;
	size_t	i;
	size_t	j;

	nb = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			++i;
		j = 0;
		while (s[i + j] != c && s[i + j])
			++j;
		if (j)
			nb++;
		i = i + j;
	}
	return (nb);
}

char	**ft_split(const char *s, char c)
{
	size_t	nb;
	char	**arr;

	if (!s)
		return (NULL);
	nb = ft_count(s, c);
	arr = malloc(sizeof(char *) * (nb + 1));
	if (!arr)
		return (NULL);
	ft_createArr(arr, s, c, nb);
	return (arr);
}
