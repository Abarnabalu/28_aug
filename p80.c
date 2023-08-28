#include<stdio.h>
int main()
{
int number,i,factorial=1;
printf("Enter the number:\n");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
factorial*=i;
}
printf("The factorial is:%d ",factorial);
return 0;
}
