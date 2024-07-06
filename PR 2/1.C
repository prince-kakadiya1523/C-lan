#include<stdio.h>
#include<conio.h>

main()
{
   int m;
   clrscr();
   printf("Enter your any mark :");
   scanf("%d",&m);
   printf("\n\n");
   (m>=92 && m<=100)
   ? printf ("your GRADE is A")
	    :(m>=81 && m<=90)
   ? printf ("your GRADE is B")
	    :(m>=71 && m<=80)
   ? printf ("your GRADE is c")
	    :(m>=61 && m<=70)
   ?printf  ("your GRADE is  D")
	     :(m>=33 && m<=50)
  ? printf ("your GRADE id E")
	    : ("you are fail");









   getch();

}