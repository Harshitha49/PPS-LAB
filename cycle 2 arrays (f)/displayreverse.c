#include<stdio.h>
void main()
{
int i,n,*ptr;
printf("enter length of array: ");
scanf("%d",&n);
int a[n];
printf("enter the values of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ptr=&(a[n-1]);
printf("the reverse values of the array using pointer are\n");
for(i=n-1;i>=0;i--)
{
printf("%5d",*ptr);
ptr=ptr-1;
}
return;
}
