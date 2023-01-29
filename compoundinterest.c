#include<math.h>
#include<stdio.h>
void main()
{
/* calculating compound interest*/
float p=2,r=100,t=3,ci;
printf("enter principal amount");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow(1+r/100,t);
printf("%f",ci);
return;
}
