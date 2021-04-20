#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*dest;
	size_t	lens;

	lens = ft_strlen(s);
	index = 0;
	if (!s)
		return (NULL);
	if (lens < (size_t)start)
		len = 0;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (s[start + index] && len > 0)
	{
		dest[index] = s[start + index];
		len--;
		++index;
	}
	dest[index] = '\0';
	return (dest);
}
