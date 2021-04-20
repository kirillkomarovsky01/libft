#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sizeDest)
{
	size_t	lenSrc;
	size_t	lenDest;
	size_t	i;

	i = 0;
	lenSrc = 0;
	lenDest = 0;
	while (dst[lenDest] != '\0')
		++lenDest;
	while (src[lenSrc] != '\0')
		++lenSrc;
	if (sizeDest < lenDest + 1)
		return (sizeDest + lenDest);
	if (sizeDest > lenDest + 1)
	{
		while (src[i] != '\0' && lenDest + 1 + i < sizeDest)
		{
			dst[lenDest + i] = src[i];
			++i;
		}
	}
	dst[lenDest + i] = '\0';
	return (lenSrc + lenDest);
}
