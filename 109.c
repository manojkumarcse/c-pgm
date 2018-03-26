#include<stdio.h>
#include<conio.h>
void main()
{
int array[50];
int i,result,n;
printf("no of elements in the array");
scanf("%d",&n);
printf("\narray\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
printf("%d ",array[i]);
}
result=min(array,n);
printf("\n%d",result);
return 0;
}
getch();
