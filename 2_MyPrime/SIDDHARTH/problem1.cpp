#include<iostream>
using namespace std;
int main()
{
    int n=0,i=0,j=0,a;
    long s[n];
    cin  >> n;
    for(i=0;i<n;i++)
    {
        cin >> s[i];
    }
    for(i=0;i<n;i++)
    {
        a=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(s[i]%s[j]== 0)
                    a++;
            }

        }
        if(a==0)
            {
                cout <<s[i]<<" ";
            }

    }

    return 0;
}
