#include <string.h>
#include <stdio.h>
void	*ft_memccpy(void *dest, const void *src, int cmp, size_t n)
{
	char *d;
	unsigned int i;

	d = dest;
	i = -1;
	while((++i < n) && ((*(char *)(src + i)) != cmp))
		*(d + i) = *(char *)(src + i);
	if (*(char *)(src + i) != cmp)
		return (NULL);
	*(d + i) = *(char *)(src + i);
	return (dest + i + 1);
}
