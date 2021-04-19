#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t lenSrc;
	size_t index;
	char *dest;
	
	index = 0;
	lenSrc = 0;
	while (src[lenSrc])
		++lenSrc;
	dest = (char *)malloc(sizeof(char) * (1 + lenSrc));
	if (!dest)
		return (NULL);
	while (src[index])
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (dest);
}
