#include<stdio.h>
void main(){
int i,n,*ptr;
printf("enter the length of array: ");
scanf("%d",&n);
int a[n];
printf("enter the values of array");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ptr=&a;
printf("\n the values of the array using pointer are \n");
for(i=0;i<n;i++)
{
printf("%5d",*ptr);
ptr=ptr+1;
}
return;
}
