#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *newStr;

	i = 0;
	if (!s1 || !s2)
		return(NULL);
	if (!(newStr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
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
