//write a program to check the given number is +ve,-ve or zero
#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n>0)
printf("the number is POSITIVE");
else
if (n<0)
printf("the number is NEGATIVE");
else
printf("the number is ZERO");
return 0;
}
