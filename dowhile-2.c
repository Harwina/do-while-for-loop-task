#include<stdio.h>
main()
{
	int n,odd=1;
	
	printf("enter the end value=");
	scanf("%d",&n);
	
	do{
		if(odd%2==0)
		{
			printf("%d\n",odd);
		}
		odd++;
	}
	while(odd<=n);
}