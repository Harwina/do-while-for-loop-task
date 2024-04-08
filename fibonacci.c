#include<stdio.h>
main()
{
	int i,n,s=0,e=1,sum;
	
	printf("enter the value=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",s);
		sum=s+e;
		s=e;
		e=sum;
	}
}