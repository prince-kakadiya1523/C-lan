#include <stdio.h>
main()







{
	               int r,c;
	printf("Enter row of array : ");



	scanf("%d",&r);
	             printf("Enter column of array : ");
	scanf("%d",&c);
	
	
	int a[r][c],j,i;
	printf("\n\nInput of array\n\n");
	for(i=0;i<r;i++)
	{
     for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]",i,j);
			         scanf("%d",&a[i][j]);
			
		}
	}
	printf("\n\nOutput of array\n\n");
	
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		            	printf("%d",a[j][i]);
		}
	
	
	
	
	
		printf("\n");
	}
}
