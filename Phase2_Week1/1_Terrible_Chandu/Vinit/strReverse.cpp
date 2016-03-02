#include<iostream>
#include<string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string S[T];

    for(int i=0; i<T; i++)
    {
        cin >> S[i];
        int length=S[i].size();
        string S1;

        for(int j=0; j<length; j++)
        {
            S1 += S[i][length - 1 - j];
        }
        cout << S1 << endl;
    }


}
