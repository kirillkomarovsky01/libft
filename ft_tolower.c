
#include "libft.h"

int	ft_tolower(int ch)
{
	if ((ch >= 65) && (ch <= 90))
		return (ch + 32);
	else
		return (ch);
}
