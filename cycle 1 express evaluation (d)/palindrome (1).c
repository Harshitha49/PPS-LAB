#include<stdio.h>
int main(){
int n,num,sum=0,rev=0,r;
while (n>0)
{
r=n%10;
sum=sum+r;
rev=(rev*10)+r;
n=n%10;
}
printf("%d\n",sum);
if(num==rev)
{
printf("palindrome\n");
}
else
{
printf("not a palindrome\n");
}
return 0;
}
