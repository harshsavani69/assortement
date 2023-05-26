#include<stdio.h>
main()
{
	int r,c,i,j,a[100][100],sum=0;
	printf("enter the row size=");
	scanf("%d",&r);
	printf("enter the colum size=");
	scanf("%d",&c);
	printf("\nenter the matrix elemnts=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nthe matrix is=\n");
	for(i=0;j<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nsum diagonal elements off matrix=%d",sum);
}
