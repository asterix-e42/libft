#include<string.h>
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
char	ret1[10];
char	ret2[10];
char	ret3[10];
char	ret4[10];
char	ret5[10];

/* --------------memset--------------- */

ft_memset(ret1, 971, 10);
printf("%d %d %d\n", ret1[1],ret1[2],ret1[3]);

memset(ret2, 976, 10);
printf("%d %d %d\n", ret2[1],ret2[2],ret2[3]);

}
