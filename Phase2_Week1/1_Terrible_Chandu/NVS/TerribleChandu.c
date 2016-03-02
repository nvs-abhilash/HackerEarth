#include<stdio.h>
#include <stdlib.h>
int main()
{
	int T,i,j = 0;
	scanf("%d",&T);

	char str[100] ,temp;

	while(T!=0)
	{
		j = 0;
   		scanf("%s",str);
    	while (str[j]!='\0')
    	{
    		j++;
    	}

    	i = 0;
   		j = j - 1;

	 	while (i < j)
	 	{
      		temp = str[i];
	      	str[i] = str[j];
	      	str[j] = temp;
	    	i++;
	 		j--;
	   }
	 puts(str);
	 T--;
	    }
	return 0;
}
