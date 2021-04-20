#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*newArr;

	while (n > 0)
	{	
		newArr = (unsigned char *)arr;
		if (*newArr == (unsigned char)c)
		{
			return (newArr);
		}
		++arr;
		n--;
	}
	return (NULL);
}
