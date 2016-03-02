#include<iostream>

using namespace std;
int main()
{
    int i;
    int j=0;
    long int sum=0;
    long int N;
    long int *a;
    long int x;
    int flag=0;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>N;
        flag=0;
        a=new long int[N];
        cin>>x;
        for(i=0;i<N;i++)
        {
            cin>>a[i];
        }
        j = 0;
        while(j<N)
        {
            i=j;
            sum = 0;
            while(i<N)
            {
                sum=sum+a[i];
                if(sum==x)
                {
                    cout<<"YES\n";
                    flag=1;
                    break;
                }
                i++;
            }
            if(flag==1)
            {
                break;
            }
            else
                j++;
        }
        delete a;

       if(flag==0)
        {
            cout<<"NO\n";
        }
 }

        return 0;
}
