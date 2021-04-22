#include "libft.h"

int	ft_atoi(const char *str)
{
	int sign;
	int res;

	res = 0;
	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\r' || *str == '\t'
			|| *str == '\v' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		if (res < 0 && sign < 0)
			return (0);
		if (res < 0 && sign > 0)
			return (-1);
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
