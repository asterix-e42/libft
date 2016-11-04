#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	i;
	int	end_dest;
	int	length;

	length = ft_strlen(src);
	end_dest = ft_strlen(dest);
	i = -1;
	while(i++ < length && i < (int)n)
		*(dest + i + end_dest) = *(src + i);
	*(dest + i + end_dest) = '\0';
	return (dest);
}
