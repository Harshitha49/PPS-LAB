#include<stdio.h>
#include<math.h>
void main()
{
int u,s,i;
u=0;
s=3;
double a,t;
a=9.8;
for(i=1;i<=10;i++,s=s+3)
{
t=u+sqrt(u*u+2*a*s);
printf("%lf\n",t);
}
return;
}
