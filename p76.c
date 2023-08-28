#include<stdio.h>
int main()
{
char mychar[1000];
int i,index=0;
printf("Enter the string:\n");
scanf("%s",&mychar);
while(mychar[index]!=0)
{
index++;
}
printf("The last character is %c",mychar[index-1]);
return 0;
}
