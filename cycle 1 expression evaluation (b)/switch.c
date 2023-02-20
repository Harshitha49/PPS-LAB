#include<stdio.h>
void main(){
float num1,num2,addition,subtraction,multiplication,division,modulus;
int choice;
printf("enter num1,num2");
scanf("%f%f",&num1,&num2);
printf("1  add \n 2 sub\n 3 product\n 4 division\n 5 quotient\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:addition=num1+num2;
printf("the sum of two no.s is %f",addition);
break;
case 2:subtraction=num1-num2;
printf("the subtraction of two no.s is %f",subtraction);
break;
case 3:multiplication=num1*num2;
printf("the product of two no.s is %f",multiplication);
break;
case 4:division=num1/num2;
printf("the quotient of two no.s is %f",division);
break;
case 5:modulus=(int)num1%(int)num2;
printf("the remainder of two no.s is %f",modulus);
break;
default:printf("enter the value between 1 to 5");
break;
}
printf("end of switch case");
return;
}
