
#include "libft.h"

int	ft_strncmp(const char *strFirst, const char *strSecond, size_t num)
{
	size_t i;
	
	i = 0;
	while (i < num)
	{
		if (strFirst[i] == 0 || strSecond[i] == 0 || strFirst[i] != strSecond[i])
			return ((unsigned char)strFirst[i] - (unsigned char)strSecond[i]);
		++i;
	}
	return (0);
}
