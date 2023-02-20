#include<stdio.h>
int main(){
int num,flag=0,i;
printf("enter a number\n");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d is a prime number");
else
printf("%d is not a prime number");
return 0;
}
