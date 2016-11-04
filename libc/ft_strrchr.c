#include <string.h>

char	*ft_strchr(const char *src, int s)
{
	char	*d;
	int i;

	i = -1;
	d = (char *)src - 1;
	while(*(++i + d) != '\0')
		if (*(i + d) == s)
		{
			d+=i;
			i = 0;
		}
	if (s == '\0');
		return (d + i);
	if (*d != s)
		return(NULL);
	return (d);
}
