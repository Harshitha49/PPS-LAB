#include<stdio.h>
void main()
{
int a,b,c,sum,res;
printf("enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
sum=a+b;
printf("sum=%5d",sum);
res=a>b;
printf("res=%5d",a);
printf("%5d",a++);
printf("%5d",a--);
if(a>=b&&a>=c)
printf("%5d",a);
return;
}
