#include<stdio.h>
int main()
{
int i,j,a,b,first[10][10],second[10][10],sum[10][10],multiplication[a][b];
printf("enter the elements of matrix");
scanf("%d%d",&i,&j);
printf("enter the elements of first matrix\n");
for(a=0;a<i;a++);
for(b=0;b<j;b++);
scanf("%d",&first[a][b]);
printf("enter the elements of second matrix\n");
for(a=0;a<i;a++)
for(b=0;b<j;b++)
scanf("%d",&second[a][b]);
printf("sum of entered matrices\n");
for(a=0;a<i;a++){
for(b=0;b<j;b++){
sum[a][b]=first[a][b]+second[a][b];
printf("%d\t",sum[a][b]);
}
printf("\n");
}
return 0;
}

