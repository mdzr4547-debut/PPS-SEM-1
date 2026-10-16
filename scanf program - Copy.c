//write a c program to find thw person is eligible  to vote
#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
 printf("enter the person's age");
 scanf ("%d",&age);
 if (age>=18)
 {
    printf("eligible to vote");
 }
else
{
    printf("not eligible ro vote");
}

}
