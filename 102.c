#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
scanf("%d",&num);
clrscr();
int num1,rem;
printf("enter the given no is");
while(num!=1)
{
rem=num%2;
num1=num/2;
printf("%d\n",num1);
num=rem;
break;
}
return 0;
getch();
}
