#include<iostream>

using namespace std;

int main()
{
    int  T;
    long long  N;
    cin  >> T;
    while(T!=0)
    {
        cin >> N;
        if(N==1)
        {cout<<1<<endl;}
        else
        {cout <<N*N*N-(N-2)*(N-2)*(N-2)<<endl;}
        T--;
    }

    return 0;
}

