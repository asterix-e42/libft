#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;
	int	lenght;

	lenght = ft_strlen(src);
	i = -1;
	while(i++ < lenght)
		*(dest + i) = *(src + i);
	return (dest);
}
