#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*d;
	int	length;

	length = strlen(src);
	if (length > 0)
		if (!(d = (char *)malloc(sizeof(char) * length)))
			return(NULL);
	while(length-- > 0)
		*(d + length) = *(src + length);
	return (d);
}
