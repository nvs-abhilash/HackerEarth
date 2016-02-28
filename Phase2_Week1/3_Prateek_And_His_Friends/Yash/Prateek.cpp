#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int t,n;
	long long int x,sm;
	
	cin >>t;
	
	for(t;t>0;t--)
	{
		
	    sm=0;
		cin>>n>>x;
		
		long int s[n];
		
		for(int i=0,j=0;i<n;i++)
		{
			cin>>s[i];
			cout<<"\n\n"<<sm;
			
			sm=sm+s[i];
			while(sm>x)
			{	
				sm=sm-s[j];
				j++;
			cout<<"\n\n"<<sm<<"   "<<j;
			}
			
			if(sm==x)
				break;
		}

		if(sm==x)
			cout<<"\nYES";
		else
			cout<<"\nNO";
	}
	
    return 0;
}
