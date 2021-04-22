#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sy;
	size_t	i;

	sy = NULL;
	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		i = ft_strlen(s1);
		while (i && ft_strchr(set, s1[i]))
			i--;
		sy = ft_substr(s1, 0, i + 1);
	}
	return (sy);
}
