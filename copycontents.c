#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp,*fp1;
char ch;
fp=fopen("fir.txt","r");
fp1=fopen("sec.txt","w");
while((ch=fgetc(fp))!=EOF)
{
fputc(ch,fp1);
}
fclose(fp);
fclose(fp1);
fp1=fopen("sec.txt","r");
while((ch=fgetc(fp1))!=EOF)
{
printf("%c",ch);
}
return 0;
}
