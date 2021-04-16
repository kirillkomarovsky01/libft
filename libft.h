#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *src, int symbol, size_t count);
void	ft_bzero(void *dest, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int symbol, size_t count);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
int	ft_memcmp(const void *arrFirst, const void *arrSecond, size_t n);
int	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t buf);
char	*ft_strchr(const char *src, int symbol);
char	*ft_strrchr(const char *src, int symbol);
char	*ft_strnstr(const char *strFirst, const char *strSecond, size_t num);
int	ft_strncmp(const char *strFirst, const char *strSecond, size_t num);
int	ft_isalpha(int ch);
int	ft_isdigit(int c);
int	ft_isalnum(int ch);
int	ft_isascii(int c);
int	ft_isprint(int ch);
int	ft_toupper(int c);
int	ft_tolower(int ch);
void	*ft_calloc(size_t number, size_t size);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
