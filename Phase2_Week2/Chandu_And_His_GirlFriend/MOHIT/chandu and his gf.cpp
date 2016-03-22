#include<iostream>
using namespace std;
void merges(long long int left[], long long int nl, long long  int right[], long long int nr,long long  int arr[])
{
    int i = 0,j=0;
    int k=0;
    while(i<nl && j<nr)
    {
        if(left[i]>=right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
        while(i<nl)
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        while(j<nr)
        {
            arr[k] = right[j];
            k++;
            j++;
        }


}

void mergesort(long long int *arr,long long  int n)
{
    if(n < 2)
        return;
    int mid = n/2;
    long long int *left;
    left = new long long int [mid];
    for(int i=0;i<mid;i++)
    {
        left[i] = arr[i];
    }
    long long  int *right;
    right = new long long int [n - mid];
    for(int j=mid;j<n;j++)
    {
        right[j-mid] = arr[j];
    }
    mergesort(left, mid);
    mergesort(right, n - mid);
    merges(left, mid, right, n - mid, arr);
}
int main()
{
    int t;
    cin>>t;
    long long int *arr;
    long long int N;
    while(t--)
    {

        cin>>N;
        arr = new long long int[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        mergesort(arr,N);
        for(int i=0;i<N;i++)
        {
            cout<<arr[i];
            cout<<" ";
        }
        cout<<endl;
        delete arr;
    }

    return 0;
}
