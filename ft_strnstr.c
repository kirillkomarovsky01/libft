#include "libft.h"

char		*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!str2[0])
		return ((char *)str1);
	while (str1[i] && i < len)
	{
		j = 0;
		while (str1[i + j] && str2[j] &&
			str1[i + j] == str2[j] && i + j < len)
			j++;
		if (!str2[j])
			return ((char *)&str1[i]);
		i++;
	}
	return (NULL);
}
