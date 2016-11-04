#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

char	*ft_memset(char *s, int v, size_t size);
void	ft_bzero(char *s, size_t size);
void	*ft_memcpy(void *dest, const void *src,  size_t size);
void	*ft_memccpy(void *dest, const void *src, int stop,  size_t size);
void	*ft_memmove(void *dest, const void *src,  size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const void *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char *ft_strcat(char *d, const char *src);
char *ft_strncat(char *d, const char *src, size_t n);

# endif
