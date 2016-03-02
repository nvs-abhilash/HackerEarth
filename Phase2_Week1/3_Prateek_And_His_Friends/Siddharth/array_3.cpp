#include<iostream>
using namespace std;

int main()
{
    int T;
    int i=0,j=i+1,sum=0,flag=0;
    cin >>T;
    while(T>0)
    {
        int N,X;
        cin >> N;
        cin >> X;
        int a[N];
        for(i=0; i<N; i++)
        {
            cin >> a[i];
        }
        i=0;
        flag = 0;
        j=0;
        while(i<N)
        {
            if(sum < X)
            {
                sum =sum+a[i];
            }
            else if(sum == X)
            {
                cout << "yes";
                flag = 1;
                break;
            }
            else
            {
                while(sum > X)
                {
                    sum=sum-a[j];
                    j++;
                }
                if(sum == X)
                {
                    cout << "yes";
                    flag = 1;
                    break;
                }
            }
            i++;
        }
        if(flag==0)
        {
            cout<< "no" <<endl;
        }
        T--;

    }


    return 0;
}
