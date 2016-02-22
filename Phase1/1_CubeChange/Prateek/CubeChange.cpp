#include<iostream>
using namespace std;

int main(){
int t;
unsigned long long n,x;
cin>>t;
while(t--){
    cin>>n;
    if(n == 1){
        cout<<n<<endl;continue;
    }
    x = (2*n*n) + ((n-2)*((4*n)-4));
    cout<<x<<endl;

}
return 0;
}
