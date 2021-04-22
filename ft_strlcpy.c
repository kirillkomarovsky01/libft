#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (dst == 0 || src == 0)
		return (0);
	if (dstsize == 0)
		i++;
	else
	{
		while (src[++i] != '\0' && i < dstsize - 1)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
