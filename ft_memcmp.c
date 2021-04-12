
#include "libft.h"

int	ft_memcmp(const void *arrFirst, const void *arrSecond, size_t n)
{
	unsigned char *newArrFirst;
	unsigned char *newArrSecond;
	size_t i;

	i = 0;
	newArrFirst = (unsigned char *)arrFirst;
	newArrSecond = (unsigned char *)arrSecond;
	while (i < n)
	{
		if (newArrFirst[i] != newArrSecond[i])
		{
			return (newArrFirst[i] - newArrSecond[i]);
		}
		++i;
	}
	return (0);
}
