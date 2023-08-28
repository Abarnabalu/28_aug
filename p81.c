#include<stdio.h>
int main()
{
int number,i,fibo=0,num1=0,num2=1;
printf("Enter the number:\n");
scanf("%d",&number);
for(i=0;i<=number;i++)
{
fibo=num1 + num2;
num1=num2;
num2=fibo;
printf("%d\t",num1);
}

return 0;
}
