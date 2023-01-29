#include<stdio.h>
void main()
{
int marks;
printf("enter marks");
scanf("%d",&marks);
if (marks>90){
printf("first class");
}
else if(marks>60){
printf("second class");
}
else if(marks>40){
printf("third class");
}
else{
printf("fail");
}
return;
}
