#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    if(0<T<1001)
    {
        long long N[T];

        for(int i=0; i<T; i++)
        {
             long long num=0,sum=0,temp=0,remainder=0;
            cin>>N[i];
            if(N[i]==1)
                cout<<1<<endl;
            else if(N[i]==2)
                cout<<2<<endl;
            else{
                do{num++;}
                    while(num*num > N[i] || N[i] >= (num+1)*(num+1));
                    temp=num;
                while(num-1)
                {
                    sum=sum+(num-1);
                    num--;
                }
                sum=(2*sum)+temp;
                remainder=N[i]-sum;
                num=2*temp-1;
                if(remainder/temp)
                    num+=(remainder/temp);

                if(remainder%temp)
                    num++;

                cout<<num<<endl;
            }

        }
    }
}
