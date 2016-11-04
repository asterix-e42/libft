#include <string.h>

size_t	ft_strlen(const void *src)
{
	size_t t;

	t = 0;
	while(*(char *) (t + src))
		t++;
	return (t);
}
