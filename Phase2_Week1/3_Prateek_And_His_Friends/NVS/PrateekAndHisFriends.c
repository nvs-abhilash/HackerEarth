#include <stdio.h>
#include <malloc.h>

int main()
{
    int T = 0, N = 0, i = 0, Start = 0, j = 0;
    scanf ("%d", &T);
    long X = 0, Sum = 0;

    int *Arr;
    while (T--)
    {
        scanf ("%d", &N);
        scanf ("%ld", &X);

        Arr = malloc (sizeof (int) * (N));
        j = 0, Start = 0;
        while ( j < N )
        {
            scanf ("%d", &Arr[j]);
            j++;
        }

        i = 0, Sum = 0;
        while (i < N)
        {
            Sum += Arr[i];

            while ((Sum > X) && (Start <= i))
            {
                Sum -= Arr[Start];
                Start++;
            }


            if (Sum == X)
            {
                printf ("YES\n");
                break;
            }

            i++;
        }

        if (i == N)
            printf ("NO\n");
    free (Arr);
    }
    return 0;
}
