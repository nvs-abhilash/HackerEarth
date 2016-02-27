#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int T;
    int i,j;
    cin >> T ;
    while(T>0)
    {

        string s;
        cin >> s;
        for(i=0; s[i] != '\0'; i++);
        for(j=i-1;j>=0;j--)
        {
           cout <<s[j];

        }
        cout <<endl;
        T--;
    }
    return 0;
}
