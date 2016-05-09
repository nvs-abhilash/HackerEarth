#include<stdio.h>
#include<limits.h>

int main()
{
    unsigned int T;
    unsigned long N;
    unsigned long vol;
    printf("Enter no of test cases :\t");
    scanf("%u", &T);
    while(T){
        scanf("%lu", &N);
        if(N == 1)
            vol = 0;
        else
            vol = (2 * N * N) + (N - 2) * (4 * N - 4);
        printf("%lu\n", vol);
        T--;
    }

return 0;
}
