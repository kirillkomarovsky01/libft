#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*arr;

	arr = malloc(size * number);
	if (!arr)
		return (NULL);
	ft_bzero(arr, number);
	return (arr);
}
