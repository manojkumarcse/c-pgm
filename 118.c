#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr
scanf("%d",&n);
if(n==0)
{
  printf("1");
}
else
{
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
}
return 0;
getch();
