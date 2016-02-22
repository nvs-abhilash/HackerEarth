#include<stdio.h>
int main()
{
		int i , j ;
		unsigned long long n;
		unsigned long long arr[100];
	scanf("%d",&j);
	if(j>0 && j<=100)
	{
	for(i=0 ; i<j ; i++)
	{
		scanf("%llu",&arr[i]);
		if(arr[i]==1)
	{
		printf("1\n");
		
	}

else 
	{
	unsigned long long a;
	n=arr[i];
	a = (n*n*n )- ((n-2)*(n-2)*(n-2));
	printf("%llu\n",a);
	}	

	}
	}

	
	return 0 ;
}
