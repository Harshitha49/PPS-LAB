#include<stdio.h>
int main(){
int num=1,n;
printf("enter the no of rows");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++){
printf("%d",num);
num=num+1;
}
printf("\n");
}
return 0;
}
