#include<stdio.h>
#include"header.h"
int main()
{
int a,b,out;
printf("get inputs:\n");
scanf("%d %d",&a,&b);
printf("\nAddition of a+b %d",out);
out=sub(a,b);
printf("\nsubtraction of a-b %d",out);
out=mul(a,b);
printf("\nmultiplication of a*b %d",out);
out=div(a,b);
printf("\ndivision of a/b %d",out);
printf("end!@#");
return 0;
}
