
#include<string.h>

void ft_bzero(void *src, size_t size)
{
	char *s;
	unsigned int i;

	s = src;
	i = -1;
	while(++i < size)
	{
		*(s + i) = 0;
	}
}
