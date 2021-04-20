#include "libft.h"

int	ft_isalpha(int ch)
{
	return (((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122)));
}
