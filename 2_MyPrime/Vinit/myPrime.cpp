#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(0<N<101)
    {
        long S[N];
        for(int i=0; i<N; i++)
        {
            cin>>S[i];
        }
        for(int i=0; i<N; i++)
        {
            int cnt=0;
            for(int j=0; j<N; j++)
            {
                if(i!=j)
                {
                    if(S[i]%S[j]==0)
                        cnt++;
                }


            }
            if(cnt==0)
                cout<<S[i]<<" ";
        }
    }

}
