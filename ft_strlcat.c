#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dest[i] != 0)
		i++;
	while (*src != 0 && i < size - 1)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = 0;
	if (ft_strlen(dest) > size)
		return (ft_strlen(src) + size);
	return (ft_strlen(dest) + ft_strlen(src));
}
