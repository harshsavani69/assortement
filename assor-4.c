#include<stdio.h>
main()
{
	int r,c,a[100][100],b[100][100],addi[100][100],i,j;
	printf("enter row size=");
	scanf("%d",&r);
	printf("enter column size=");
	scanf("%d",&c);
	printf("\nenter the first matrix=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("s[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("\nenter the second matrix=\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
		
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			addi[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\naddition of two matrix=\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",addi[i][j]);
		}
		printf("\n");
	}
}
