#include<string.h>
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
char	ret1[10];
char	ret2[10];
//char	ret3[10];
//char	ret4[10];
//char	ret5[10];
void *testret1;
void *testret2;
/* ----------------------------- memset ----------------------------- */
printf("\nmemset :\n");

testret1 = ft_memset(ret1, 71, 10);
printf("%s\n", ret1);

testret2 = memset(ret2, 76, 10);
printf("%s\n", ret2);

printf("\n%s\n", (char *)testret1);
printf("%s\n", (char *)testret2);


/* ----------------------------- bzero ----------------------------- */
printf("\nbzero :\n");

bzero(ret2, 5);
for(int i = 0; i < 10; i++)
printf("%d ", *(ret2 + i));
printf("\n");

ft_bzero(ret1, 5);
for(int i = 0; i < 10; i++)
printf("%d ", *(ret1 + i));
printf("\n");

/* ----------------------------- memcpy ----------------------------- */
printf("\nmemcpy :\n");


testret1 = memcpy(ret2, ret2 + 5, 3); 
for(int i = 0; i < 10; i++)
printf("%d ", *(ret2 + i));
printf("\n");

testret2 = ft_memcpy(ret1, ret1 + 5, 3); 
for(int i = 0; i < 10; i++)
printf("%d ", *(ret1 + i));
printf("\n");

printf("\n%s\n", (char *)testret1);
printf("%s\n", (char *)testret2);

/* ----------------------------- memccpy ----------------------------- */

printf("\nmemccpy :\n");


testret2 = memccpy(ret2, ret1 + 4, 71, 0); 
testret1 = ft_memccpy(ret1, ret2 + 4, 76, 0); 
printf("return value : ");
if (testret1 == testret2)
	printf("ok\n");
else
	printf("nop\n");

testret2 = memccpy(ret2, ret1 + 4, 71, 4); 
for(int i = 0; i < 10; i++)
	printf("%d ", *(ret2 + i));
printf("\n");

testret1 = ft_memccpy(ret1, ret2 + 4, 76, -4); 
for(int i = 0; i < 10; i++)
	printf("%d ", *(ret1 + i));

printf("\n%s\n", (char *)testret1);
printf("%s\n", (char *)testret2);

/*------------------------- memmove ----------------------------- */

printf("\nmemmove :\n");

testret1 = memmove(ret2 + 4, ret2, 5); 
for(int i = 0; i < 10; i++)
	printf("%d ", *(ret2 + i));
printf("\n");

testret2 = ft_memmove(ret1 + 4, ret1, 5); 
for(int i = 0; i < 10; i++)
	printf("%d ", *(ret1 + i));
printf("\n%s\n", (char *)testret1 + 1);
printf("%s\n", (char *)testret2 + 1);

return(0);
}
