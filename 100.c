#include<stdio.h>
#include<conio.h>
void main()
{
int rem,product=1;
printf("enter the no");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
product=rem;
n=n\10;
}
printf("\n%d" product);
return 0;
}
getch();
