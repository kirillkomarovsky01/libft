
#include "libft.h"

int	ft_atoi(const char *str)
{
	int result;
	int negative;
	int i;
	
	i = 0;
	result = 0;
	negative = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
	++i;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (int)str[i] - '0';
		++i;
	}
	if (negative != 0)
		result *= (-1);
	return (result);
}
