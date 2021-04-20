#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t buf)
{
	size_t	index;
	size_t	lengthSrc;

	index = 0;
	lengthSrc = 0;
	if (buf == 0)
		return (lengthSrc);
	while (src[lengthSrc] != '\0')
		++lengthSrc;
	while (index < (buf - 1) && src[index] != '\0')
	{
		dst[index] = src[index];
		++index;
	}
	dst[index] = '\0';
	return (lengthSrc);
}
