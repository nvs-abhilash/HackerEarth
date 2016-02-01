#include<iostream>

using namespace std;

int volume(int T,int N)
{
    return N*N*N;
}

int main()
{
    int T,N;
    cout << "enter the number of test cases" <<endl;
    cin  >> T;
    if(T==0)
        {
            cout << "sorry  wrong input"<<endl;
        }

    while(T!=0)
    {
        cout << "enter the value of the sides of the cube" <<endl;
        cin >> N;
        cout << "the volume of the cube is "<<volume(T,N)<<endl;
        T--;
    }

    return 0;
}
