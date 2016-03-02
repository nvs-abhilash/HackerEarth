#include <iostream>
using namespace std;

int main()
{
	int n,j=0;
	char s[100],x[100];
	cin>>n;
	
	for(int z=0;z<n;z++)
	{
		j=0;
		cout<<"\n";
		cin>>s;
		
		x[0]=s[0];
		for(int i=1;s[i]!='\0';i++)
		{
			if(s[i]==x[j]);
			else
			{
				j++;
				x[j]=s[i];
			}
		}
		x[++j]='\0';
		cout<<x;
	}
    return 0;
}

