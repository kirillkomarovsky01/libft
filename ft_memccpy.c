#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int symbol, size_t count)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	while (count--)
	{
		*d = *s;
		if (*s == (const char)symbol)
		{
			return ((char *)dest + 1);
			break ;
		}
		++d;
		++s;
		++dest;
		++src;
	}
	return (0);
}
