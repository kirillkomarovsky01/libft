#include "libft.h"

static int	ft_sym(char s1, char s2)
{
	if ((s1 == 0) || (s2 == 0))
		return (1);
	return (0);
}

int	ft_strncmp(const char *strFirst, const char *strSecond, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (ft_sym(strFirst[i], strSecond[i]) || strFirst[i] != strSecond[i])
			return ((unsigned char)strFirst[i] - (unsigned char)strSecond[i]);
		++i;
	}
	return (0);
}
