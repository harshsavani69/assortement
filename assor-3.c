#include<stdio.h>

main()

{
	int a[1000],i,j,r,n,temp;
	
	printf("enter array size=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("nnimber of right rotate an array=");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		temp=a[n-1];
		for(j=n-1;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
	printf("\narray elements after right rotate=");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}
