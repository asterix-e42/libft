#include <stdlib.h>
#include<stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	int ret;
	unsigned int i;

	ret = 0;
	i = -1;
	while(++i < size && !ret)
		ret = *(char *) (s1 + i) - *(char *) (s2 + i);
	return (ret);
}
