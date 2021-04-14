
#include "libft.h"

char	*ft_strrchr(const char *src, int symbol)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		++i;
	while (i >= 0 && src[i] != (char)symbol)
		i--;
	if ((char)symbol == src[i])
		return((char *)&src[i]);
	return (NULL);
}
