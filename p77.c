#include<stdio.h>
int main()
{


char mychar[1000];
int i,index=0,count;
printf("Enter the string:\n");
scanf("%[^\n]s",mychar);
int space=0,vowels=0,consonent=0;
for(index=0;mychar[index]!='\0';index++)
{

if ((mychar[index] >= 'a' && mychar[index] <= 'z') || (mychar[index] >= 'A' && mychar[index] <= 'Z'))
{
if (mychar[index] == 'a' || mychar[index] == 'e' || mychar[index] == 'i' || mychar[index] == 'o' || mychar[index] == 'u' ||
                mychar[index] == 'A' || mychar[index] == 'E' || mychar[index] == 'I' || mychar[index] == 'O' || mychar[index] == 'U') {
                vowels++;
} else
{
consonent++;
}
}
else if(mychar[index]==' ')
{
space++;
}
}
printf("there are %d vowels, %d consonents and %d spaces",vowels,consonent,space);
return 0;
}
