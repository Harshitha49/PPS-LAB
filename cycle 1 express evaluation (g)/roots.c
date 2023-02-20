#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d,root1,root2;
printf("enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=(b*b-4*a*c);
if (d>0)
{
root1=(-b+sqrt(d))/2*a;
root2=(-b+sqrt(d))/2*a;
printf("the roots are %d and %d\n",root1,root2);
}
else if (d==0)
{
root1=-b/(2*a);
root2=-b/(2*a);
printf("the roots are %d and %d\n",root1,root2);
}
else
{
printf("roots are imaginary\n");
}
return 0;
}

