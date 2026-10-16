//write a program to check for user authentication (given UID,PWD)
#include<stdio.h>
int main()
{
int uid,upwd,sid,spwd;
sid=222;
spwd=100;
printf("enter uid,pwd in numbers");
scanf("%d %d",&uid,&upwd);
if((uid==sid)&&(upwd==spwd))
printf("login successful");
else
printf("invalid credentials");
return 0;
}
