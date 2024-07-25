#include<stdio.h>
#include<conio.h>
main()
{   int n,Id,sum;
    clrscr();
    printf("Enter your number plz :");
    scanf("%d",&n);
    Id=n%10;
    while(n>=10)
    {

    n=n/10;
    }
    sum=Id+n;
    printf("%d+%d=%d",n,Id,sum);
    gecth();
}