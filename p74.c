#include<stdio.h>
int main()
{
int number,i,divisors=0;
printf("enter the number:\n ");
scanf("%d",&number);
for(i=1;i<=number;i++){
if(number%i==0){
divisors++;}}
if(divisors==2){
printf("the number is prime");}
else{
printf("The number is not prime");}

return 0;
}
