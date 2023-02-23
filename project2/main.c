#include<stdio.h>
#include"header.h"
int main()
{
int a,b,out;
printf("get inputs:\n");
scanf("%d %d",&a,&b);
out = add(a,b);
printf("\nAddition of a+b %d",out);
return 0;
}
