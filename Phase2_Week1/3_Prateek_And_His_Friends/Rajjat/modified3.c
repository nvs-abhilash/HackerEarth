#include<stdio.h>

int main()
{
    int T,t;
    long int N,j,i;
    long long int X,max;
    scanf("%d",&T);
    while(T!=0)
    {scanf("%li %lli",&N,&X);
    long cost[N];

    for(i=0;i<N;i++)
    {
        scanf("%li",&cost[i]);
    }
    j=0;
    t=0;
    max=cost[0];
    i=1;


         while(i<=N)
        {   t=0;
            if(max==X)
            {   t=1;
                break;
            }
            else if(max>X)
            {
                while(max>X && j<i)
                {
                max=max-cost[j];
                j++;
                }
            }
            else if(max<X)
            {
                max=max + cost[i];
                i++;
            }



    }
    if(t==1)
        printf("YES\n");
        else
            printf("NO\n");
     T--;
     }
            return 0;


}
