#include <stdio.h>
main()
{
	int r,c;
	printf("Enter row of array : ");
	scanf("%d",&r);
	printf("Enter column of array : ");
	
	
	
	
	scanf("%d",&c);
	
	
	int a[r][c],j,i;
	
	
	
	
	
	
	
	printf("\n\ninput of array\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		
		
		
		
		
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
			
			
			
			
		}
	}
	printf("\n\nOutput of array\n\n");
	int r,sum=0;
	
	
	
	
	
	printf("Enter row for sum : ");
	scanf("%d",&r);
	
	
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
	if(r==i)
		
		
		
		
		
			{
				printf("%d",a[i][j]);
				sum+=a[i][j];
			}
		}
		
	}
	
	int c,sum1=0;
	
	printf("\nEnter r:");
               	scanf("%d",&r);
	   
           	for(i=0;i<row;i++)
             	{
    for(j=0;j<c;j++)
		{
	if(i==c)
			{
			
			
			
			
				printf("%d",a[j][i]);
				sum1 += a[j][i];
			}
			}	}
	
	printf("\nsum %d\n",sum);






	printf("\nsum %d\n",sum1);
}

