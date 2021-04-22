#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;
	size_t			len;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		if (!(ptr = malloc((len + 1))))
			return (NULL);
		while (s[i] != '\0')
		{
			ptr[i] = f(i, s[i]);
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
