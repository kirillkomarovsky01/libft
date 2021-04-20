#include "libft.h"

char	*ft_strchr(const char *src, int symbol)
{
	int		i;
	char	newSymbol;

	i = 0;
	newSymbol = (unsigned char)symbol;
	while (src[i] != '\0')
	{
		if (src[i] == newSymbol)
			return ((char *)src + i);
		++i;
	}
	if (src[i] == newSymbol)
		return ((char *)src + i);
	return (NULL);
}
