#include<stdio.h>
#include<math.h>
#include<malloc.h>

int main(){
    int N, count = 0, i = 0, j = 0;
    scanf("%d", &N);
    int* S = malloc (sizeof(int) * N);

    while(i < N){
        scanf("%d", &S[i]);
        i++;
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(S[i] > S[j]){
                if(S[i] % S[j] == 0){
                    count = 0;
                    break;
                }
                else
                    count = 1;
            }
        }
        if(count == 1)
            printf("%d  ", S[i]);
    }

return 0;
}
