#include <stdio.h>


int main()
{
	short T = 0;
	int M = 0, N = 0;
	int i = 0, j = 0;

	int *Arr1, *Arr2;
	scanf ("%d", &T);

	while (T--)
	{
		scanf ("%d%d", &M, &N);

		Arr1 = malloc (sizeof (int) * M);
		Arr2 = malloc (sizeof (int) * N);

		i = 0;
		while (i < M)
		{
			scanf ("%d", &Arr1[i++]);
		}

		i = 0;
		while (i < N)
		{
			scanf ("%d", &Arr2[i++]);
		}

		i = 0, j = 0;
		while ((i < M) && (j < N))
		{
			if (Arr1[i] >= Arr2[j])
			{
				printf ("%d ", Arr1[i++]);
			}
			else
			{
				printf ("%d ", Arr2[j++]);
			}
		}

		while (i < M)
			printf ("%d ", Arr1[i++]);

		while (j < N)
			printf ("%d ", Arr2[j++]);

		printf ("\n");
	}
    return 0;
}
