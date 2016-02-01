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
	    	K=pow(N,3)-pow(N-2,3);
	    	cout<<K;
	    }
	}
	return 0;
}
