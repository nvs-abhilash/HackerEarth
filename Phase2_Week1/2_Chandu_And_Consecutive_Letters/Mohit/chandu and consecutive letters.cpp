#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   char a[31];
   char s[31];
   int i;
   int j;
   int k;
   int n;
   int z;
    while(t--)
    {
        k=0;
        cin>>a;
        n=strlen(a);
        for(i=0;i<n;i++)
        {
            j=i+1;
            if(a[i]==a[j]);
            else
            {
                s[k]=a[i];
                k++;
            }
        }

        s[k]='\0';
        z=strlen(s);
        for(i=0;i<z;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
