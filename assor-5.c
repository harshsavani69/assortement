#include<stdio.h>
main()
{
	int r,c,i,j,a[100][100],transpose[100][100];
	
	printf("enter row size=");
	scanf("%d",&r);
	printf("enter column size=");
	scanf("%d",&c);
	printf("\nenter matrix elements=\n");
	
	for(i=0;i<r;i++)
	{
	
	for(j=0;i<r;j++)
	 {
		printf("a[%D][%d]=",i,j);
		scanf("%d",&a[i][j]);
 	 }
 	 
	}
	printf("\nenterd matrix=\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("\ntranspose of the matrix=\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d  ",transpose[i][j]);
		}
		printf("\n");
	}
}
