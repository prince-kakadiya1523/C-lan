#include<stdio.h>
#include<conio.h>

main()
{
   int M,E,S,G,H;
   float Total;
   clrscr();
   printf("Enter your science mark:");
   scanf("%d",&M);
   printf("Enter your hindi mark:");
   scanf("%d",&E);
   printf("Enter your English mark:");
   scanf("%d",&S);
   printf("Enter your maths mark:");
   scanf("%d",&G);
   printf("Enter your gujrati:");
   scanf ("%d",&H);

   Total =((M+E+S+G+H)/500.)*100;
   printf("Total=%f",Total);


   if (Total>=91 && Total<=100)
   {clrscr();
   printf("Grade = A+");
   }

   else if (Total>=81 && Total<=90)
   {clrscr();
   printf("Grade = A");
   }

   else if (Total>=71 && Total<=80)
   { clrscr();
   printf("Grade = B+");
   }

   else if (Total>=61 && Total<=70)
   {
   clrscr();
   printf("Grade = B+");
   }
   else if (Total>=51 && Total<=60)

   {clrscr();
   printf("Grade = C+");
   }
   else if (Total>=41 && Total<=50)
   {clrscr();
   printf("Grade = C");
   }
   else if (Total>=33 && Total<=40)
   {clrscr();
   printf("Grade = D");
   }
   else
   { clrscr ();
   printf("you are fail bro !!");
   }
   getch();





}