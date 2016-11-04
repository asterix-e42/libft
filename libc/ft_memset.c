
#include<string.h>

char	*ft_memset(char *src, int val, size_t size)
{
	char *s;
	unsigned int i;

	s = src;
	i = -1;
	while(++i < size)
	{
		*(s + i) = val;
	}
	return src;
}
