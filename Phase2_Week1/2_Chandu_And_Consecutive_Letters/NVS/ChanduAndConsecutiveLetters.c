#include <stdio.h>
#include <string.h>

int main()
{
    int T = 0;
    char S[30];
    int i = 0;

    scanf ("%d", &T);

    while (T--)
    {
        scanf ("%s", S);
        printf ("%c", S[0]);
        i = 1;
        while (S[i] != '\0')
        {
            if (S[i-1] != S[i])
                printf ("%c", S[i]);
            i++;
        }

        printf ("\n");
    }
    return 0;
}
