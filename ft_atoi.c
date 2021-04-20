#include "libft.h"

static int	ft_f_r(char s)
{
	if ((s == '\f') || (s == '\r'))
		return (1);
	return (0);
}

static int	ft_n_v(char s)
{
	if ((s == '\n') || (s == '\v') || (s == '\t'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;
	int	i;

	i = 0;
	result = 0;
	negative = 0;
	while ((str[i] == ' ') || ft_n_v(str[i]) || ft_f_r(str[i]))
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
