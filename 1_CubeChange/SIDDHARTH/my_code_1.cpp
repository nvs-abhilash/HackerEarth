#include<iostream>

using namespace std;

int volume(int N)
{
    return N*N*N;
}

int main()
{
   long unsigned int  T;
   long unsigned int  N;
    //cout << "enter the number of test cases" <<endl;
    cin  >> T;
    if(T==0)
        {
    //        cout << "sorry  wrong input"<<endl;
            return 1;
        }

    while(T!=0)
    {
        //cout << "enter the value of the sides of the cube" <<endl;
        cin >> N;
        if(N==1)
        {
        cout <<volume(N)<<endl;
        }
        else
        {
        cout <<volume(N)-1<<endl;
        }
        T--;
    }

    return 0;
}
