#include<stdio.h>
#include<string.h>
int main()
{
char string[40];
int length=0,flag=1,i;
printf("enter string");
scanf("%s",string);
for(i=0;string[i]!='\0';i++)
{
if (string[i]!=string[length-1-i]);
{
flag=0;
break;
}
}
if(flag==1)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
return 0;
}
