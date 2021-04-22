#include "libft.h"

static void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (str[n - i - 1] == (unsigned char)c)
			return (str + n - i - 1);
	return (0);
}

char		*ft_strrchr(const char *s, int c)
{
	return (ft_memrchr(s, c, ft_strlen(s) + 1));
}
