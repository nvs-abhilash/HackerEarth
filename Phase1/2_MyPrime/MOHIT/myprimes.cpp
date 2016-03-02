#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    long long int a[N];
    int i,j;
    for(i=0;i<N;i++)
        cin>>a[i];
    int k=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i!=j)
            {
                if((a[i]%a[j])==0)
            {
                k++;
                break;
            }
            else
            {
                k=0;
                continue;
            }

            }
        }
         if(k==0)
            {
                cout<<a[i]<<endl;
            }
    }
    getch();
    return 0;
}
