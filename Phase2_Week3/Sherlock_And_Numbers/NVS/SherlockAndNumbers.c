#include <stdio.h>
#include <malloc.h>

int main ()
{
    int T = 0, N = 0, K = 0, P = 0, i = 0;
    int *A;
    scanf ("%d", &T);

    while (T--)
    {
        scanf ("%d%d%d", &N, &K, &P);
        A = malloc (sizeof (int) * K);
        i = 0;
        while (i < K)
        {
            scanf ("%d", &A[i++]);
        }

        for (i = 0; i < K; i++)
        {
            if (P  >= A[i])
                P++;
            else
            {
                if (P <= N)
                    printf("%d\n", P);
                else
                    printf ("%d\n", -1);
                break;
            }
        }
        if (i == K)
        {
            if (P <= N)
                printf("%d\n", P);
            else
                printf ("%d\n", -1);
        }
        free (A);
    }

    return 0;
}
