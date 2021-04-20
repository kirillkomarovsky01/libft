#include "libft.h"

char	*ft_strnstr(const char *strFirst, const char *strSecond, size_t num)
{
	size_t	lenSecond;
	int		mem;

	if (!(*strSecond))
		return ((char *)strFirst);
	lenSecond = ft_strlen(strSecond);
	if (lenSecond <= num)
	{
		while ((*strFirst) && (num - lenSecond + 1 > 0))
		{
			if (*strFirst == *strSecond)
			{
				mem = ft_memcmp((char *)strFirst, (char *)strSecond, lenSecond);
				if (mem == 0)
					return ((char *)strFirst);
			}
			++strFirst;
			num--;
		}
	}
	return (NULL);
}
