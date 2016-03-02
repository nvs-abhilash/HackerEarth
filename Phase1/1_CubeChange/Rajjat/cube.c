#include <stdio.h>

int main()
{
   unsigned short int T;
   unsigned long long int N;
   scanf("%hu",&T);
   while(T!=0)
   {
   	scanf("%llu",&N);
   	if(N<2)
   	{
   		printf("%llu\n",N);
   	}
   	else {
   		printf("%llu\n", (N*N*N)-(N-2)*(N-2)*(N-2));

   	}
   	T--;
   }
    return 0;
}
