
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *newDest;
	unsigned char *newSrc;
	size_t i;

	i = 0;
	newDest = dest;
	newSrc = (unsigned char *)src;
	if (!newDest && !newSrc)
	{
		return (0);
	}
	while (i < n)
	{
		newDest[i] = newSrc[i];
		++i;
	}
	return (dest);
}
