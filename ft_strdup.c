#include "libft.h"

char	*ft_strdup(const char *src)
{
	int lenSrc;
	int index;
	char *dest;
	
	index = 0;
	lenSrc = 0;
	while (src[lenSrc])
		++lenSrc;
	dest = (char *)malloc(sizeof(char) * (1 + lenSrc));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
