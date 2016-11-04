#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char *d;
	char *tmp;
	unsigned int i;

	tmp = (char *)malloc(sizeof(char) * size);
	d = dest;
	i = -1;
	while(++i < size)
		*(tmp + i) = *(char *) (src + i);
	while(--i > 0)
		*(d + i) = *(char *) (src + i);
	free(tmp);
	return (dest);
}
