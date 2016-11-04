#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(int ac, char *av)
{
char ret1[10];
char ret2[10];
int i;

i = -1;
while(i++ < 10)
{
	*(ret1 + i) = 68 + i;
	*(ret2 + i) = 69 + i;
}
printf("%s, %p\n", ret1, ret1);
printf("%s, %p\n", ret2, ret2);
printf("\n");

strncat(ret1, ret1, 8);
printf("%s\n", ret1);
printf("%s\n", ret2);
return(0);
}
