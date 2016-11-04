#include <stdlib.h>
void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char *d;
	unsigned int i;
	d = NULL;
	i = -1;
	while(++i < size && !d)
		if(*(unsigned char *) (s + i) == c)
			d = (unsigned char *) (s + i);
	return (d);
}
