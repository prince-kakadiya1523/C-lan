#include<stdio.h>
#include<conio.h>
main()
{
int n,a=1,length=0;
clrscr();
printf("Enter your number :");
scanf("%d",&n);
printf("\n\n");
while(n!=0)
{   n=n/10;
    length++;
}
   printf("%d",length);
   getch();
}