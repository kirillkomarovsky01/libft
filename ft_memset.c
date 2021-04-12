

#include "libft.h"

void	*ft_memset(void *src, int symbol, size_t count)
{
	unsigned char	*newSrc;
	unsigned char	newSymbol;
	size_t		i;

	i = 0;
	newSrc = src;
	newSymbol = symbol;
	while (i < count)
	{
		newSrc[i] = newSymbol;
		++i;
	}
	return(src);
}
