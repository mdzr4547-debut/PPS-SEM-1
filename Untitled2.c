#include<stdio.h>
#include<string.h>

int main()
{
char*s1,*s2;
printf("enter 1st string");
 fgets(str1,sizeof(str1),stdin);
printf("enter 2nd string");
 fgets (str2,sizeof(str2),stdin);
str1[strcspn(str1,"/n")]='/0';
str2[strcspn(str2,"/n")]='/0';
s1=str1;
s2=str2;
while(*s1!='/o')
s1++;
while(*s2!='/0')
}
*s1=*s2;
printf("concatenated string %s",str1);
return 0;
}








}
