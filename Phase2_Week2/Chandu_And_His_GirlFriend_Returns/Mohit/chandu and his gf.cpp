#include<iostream>
#include<stdlib.h>
using namespace std;
void merge(long long l[],long long int nl,long long int r[],long long nr,long long a[])
{
  int i=0,j=0,k=0;
  while(i<nl && j<nr)
  {
    if(l[i]>=r[j])
    {
      a[k++]=l[i++];
    }
    else
    {
      a[k++]=r[j++];
    }
  }

  while(i<nl)
  {
    a[k++]=l[i++];
  }
  while(j<nr)
  {
    a[k++]=r[j++];
  }
}
int main()
{
  int t;

  cin>>t;
  long long int *A;
  long long int *B;
  long long int N;
  long long int M;
  long long int *Final;
  int i;
  while(t)
  {

    cin>>N;

    cin>>M;

    A = new long long int [N];

    for(i=0;i<N;i++)
    {
      cin>>A[i];
    }

    B = new long long int [M];
    for(i=0;i<M;i++)
    {
      cin>>B[i];
    }
    Final = new long long int [N+M];

    merge(A,N,B,M,Final);

    for(i=0;i<N+M;i++)
    {
      cout<<Final[i]<<" ";
    }
    delete A;
    delete B;
    delete Final;
    t--;
    cout << endl;
  }
  return 0;
}
