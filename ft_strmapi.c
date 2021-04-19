#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*newStr;
	size_t		len;

	if (f == 0 || s == 0)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(newStr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		newStr[i] = f(i, s[i]);
		++i;
	}
	newStr[i] = '\0';
	return (NULL);
}
