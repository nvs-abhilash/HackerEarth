#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int T;
    int i,j=0,k=0;
    cin >> T;
    while(T>0)
    {
        string s;
        cin >> s;
        cout << s[0];
        for(i=1; s[i] != '\0'; i++)
        {
            if(s[i] != s[i-1])
            {
                cout << s[i];
            }
        }

        cout <<endl;
        T--;
    }
    return 0;
}

