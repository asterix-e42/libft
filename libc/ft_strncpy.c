#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int	i;
	int	lenght;

	lenght = ft_strlen(src);
	i = -1;
	while(i++ < lenght || i < n)
		*(dest + i) = *(src + i);
	while(i++ < n)
		*(dest + i) = '\0';
	return (dest);
}
