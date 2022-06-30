#include<stdio.h>
main()
{
	int a[100],i,n,small=0;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<small)
		small=a[i];
	}
	printf("small=%d",small);

}
	
	