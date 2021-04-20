#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*newDest;
	size_t			i;

	i = 0;
	newDest = dest;
	while (i < n)
	{
		newDest[i] = 0;
		++i;
	}
}
