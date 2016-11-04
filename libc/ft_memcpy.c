#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	unsigned int i;

	d = dest;
	i = -1;
	while(++i < n)
		*(d + i) = *(char *) (src + i);
	return (dest);
}
