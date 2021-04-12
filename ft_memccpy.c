
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int symbol, size_t count)
{
	unsigned char	*newDest;
	unsigned char	*newSrc;
	size_t		i;

	i = 0;
	newDest = dest;
	newSrc = (unsigned char *)src;
	while (i < count)
	{
		newDest[i] = newSrc[i];
		if (newSrc[i] == symbol)
			return(dest);
		++i;
	}
	return (0);
}
