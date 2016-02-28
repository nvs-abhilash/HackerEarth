#include <iostream>
using namespace std;

int main()
{
    int n;
    char ar[50];
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
    	cout<<"\n";
    	int size;
    	
    	cin>>ar;
    	for(size=0;ar[size]!='\0';size++);
		
		if(size>1) 
		{
			for(int i=0,j=size-1;i<j;i++,j--)
			{
				char tem;
				tem=ar[i];
				ar[i]=ar[j];
				ar[j]=tem;
			}
		}
    	cout<<ar;
    }
    return 0;
}
