
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*newDest;
	unsigned char	*newSrc;
	

	if (dst == src || n == 0)
	{
		return (dst);
	}
	newDest = (unsigned char *)dst;
	newSrc = (unsigned char *)src;
	if (newDest > newSrc)
	{
		while (n--)
			newDest[n] = newSrc[n];
	}
	else
	{
		while (n--)
			*newDest++ = *newSrc++;
	}
	return (newDest);
}
