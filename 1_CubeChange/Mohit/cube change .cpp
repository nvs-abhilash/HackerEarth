#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
    long long int N;
    long long int K;
	while(t--)
	{
		cin>>N;
	    if(N==1)
	    {
	    	cout<<N<<endl;
	    }
	    else
	    {
	    	K=(N*N*N)-(N-2)*(N-2)*(N-2);
	    	cout<<K<<endl;
	    }
	}
	return 0;
}
