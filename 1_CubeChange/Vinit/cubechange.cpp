#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int numCases;
    cin >> numCases;
    unsigned long  cases[numCases];
    unsigned long  volume[numCases];
    cout << endl;

    if(numCases <=100 && numCases>=1)
    {
        for(int i=0; i<numCases; i++)
        {
            cin >> cases[i];
            if(cases[i]==1)
                volume[i]=1;
            else
            {
                volume[i]=(cases[i]*cases[i]*cases[i])-((cases[i]-2)*(cases[i]-2)*(cases[i]-2));
            }
            cout << volume[i] <<endl;
        }
    }




    return 0;
}
