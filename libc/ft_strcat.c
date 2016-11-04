#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	end_dest;
	int	length;

	length = ft_strlen(src);
	end_dest = ft_strlen(dest);
	i = -1;
	while(i++ < length)
		*(dest + i + end_dest) = *(src + i);
	return (dest);
}
