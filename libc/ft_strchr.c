#include <string.h>

char	*ft_strchr(const char *src, int s)
{
	char	*d;

	d = (char *)src;
	while(*d != s && *d != '\0')
		d++;
	if(*d != s)
		return(NULL);
	return (d);
}
