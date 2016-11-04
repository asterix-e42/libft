#include<string.h>
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
char	ret1[10];
char	ret2[10];
char *ret3;
char *ret4;
void *testret1;
void *testret2;
int intret1;
int intret2;
size_t t;

for(int i = 0; i < 10; i++)
	*(ret1 + i) = 70 + i;
for(int i = 0; i < 10; i++)
	*(ret2 + i) = 70 + i;
/*------------------------- memchr ----------------------------- */

printf("\nmemchr :\n");

testret2 = ft_memchr(ret2, 76, 7); 

testret1 = memchr(ret1, 71, 5); 
for(int i = 0; i < 10; i++)
	printf("%d ", *(ret1 + i));

printf("\n%s\n", (char *)testret2);
printf("%s\n", (char *)testret1);

/*------------------------- memcmp ----------------------------- */

printf("\nmemcmp :\n");

intret2 = ft_memcmp(ret1, ret1, 5); 
intret1 = ft_memcmp(ret1, ret2 + 3, 3); 
printf("%d\n", intret2);
printf("%d\n", intret1);

/*------------------------- strlen ----------------------------- */

printf("\nstrlen :\n");

*(ret1 + 4) = '\0';
t = ft_strlen(ret1); 
printf("%ld  // %ld\n", t, strlen(ret1));

/*------------------------- strdup ----------------------------- */

printf("\nstrdup :\n");

(void) ret4;
*(ret1 + 4) = 40;
ret3 = ft_strdup(ret1); 
printf("%s\n", ret3);
printf("%s\n", ret1);

/*------------------------- strcpy ----------------------------- */

printf("\nstrcpy :\n");

printf("%s\n", ret1);
printf("%s\n", ret2);
ft_strcpy(ret1 + 3, ret1);
printf("%s\n", ret1);
printf("%s\n", ret2);
return(0);
}
