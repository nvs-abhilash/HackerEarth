#include<iostream>
using namespace std;
#include<string.h>
#include <stdlib.h>
unsigned long long a  = 0 , b = 0 ,A , B ;
unsigned long c = 0;char d[20] , k[20];
unsigned long long dd = 0 , kk , w;
int comp(char x[] , char y[]){
    int len_x =strlen(x) , len_y = strlen(y);
    if(len_x == len_y){
            if(strcmp(x,y) == 1){
                len_x--;len_y--;
            }
        return strcmp(x,y);
    }
    else
        if(len_y > len_x)
            return -1;
        else
            return 1;
}
int main(){
    int t,q,time,i;
    cin>>t;
    while(t--){
    cin>>a>>b>>c>>d>>k;
    q = comp(d , k);
    if(q == 1 || q == 0){
        time = 0;
        cout<<time + 1<<endl;
    }else{

        int low=0,mid=0,high=0;dd = strtoull(d ,NULL , 10 );
        kk = strtoull(k , NULL , 10);
        for(i = 1 ; i < 1000000 ; i = i*2){
                A = 1 ; B = 1;
            for(int j = 1 ; j < 4 ; j ++ ){
                A *= i;
                if(j == 2) B = A;
            }
            w = a*A + b*B + c*i + dd;
            if(w > kk) break;
        }
        low = i/2;high = i;
        while(low <= high ){
            mid = (low + high) / 2;
            A = 1 ; B = 1;
            for(int j = 1 ; j < 4 ; j ++ ){
                A *= mid;
                if(j == 2) B = A;
            }
            w = a*A + b*B + c*mid + dd;
            if(w < kk)  low = mid + 1;
            if(w > kk) high = mid - 1;
            if(w == kk) break;
        }
        cout<<mid-1<<endl;

    }

    }

return 0;
}
