#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d\n",&n);
if(n>0)
{
printf("the number is positive");
}
else if(n<0)
{
printf("the number is negative");
}
else
{
printf("the number is zero");
}
return 0;
}
