#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*newStr;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	newStr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!(newStr))
		return (NULL);
	while (*s1)
	{
		newStr[i] = *s1++;
		++i;
	}
	while (*s2)
	{
		newStr[i] = *s2++;
		++i;
	}
	newStr[i] = '\0';
	return (newStr);
}
