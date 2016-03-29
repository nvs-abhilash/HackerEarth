#include <stdio.h>
#include <malloc.h>

void Merge (int **Arr, int Low, int High);
void MergeSort (int **Arr, int Low, int High);

int main ()
{
	int T, N, i;
	int **Arr = malloc (sizeof (int *) * 3);

	scanf ("%d", &T);

	while (T--)
	{
		scanf ("%d", &N);
		Arr[0] = malloc (sizeof (int) * N);
		Arr[1] = malloc (sizeof (int) * N);
		Arr[2] = malloc (sizeof (int) * N);


		for (i = 0; i < N; ++i)
		{
			scanf ("%d", &Arr[0][i]);
			Arr[1][i] = i;
			Arr[2][i] = 0;
		}

		MergeSort (Arr, 0, N - 1);

		for (i = 0; i < N; ++i)
		{
			printf ("%d ", Arr[2][i]);
		}
		printf ("\n");
	}

	for (i = 0; i < 3; i++)
		free (Arr[i]);

	return 0;
}

void Merge (int **Arr, int Low, int High)
{

	int Mid = (Low + High) / 2, Ctr = 0;

	int **Arr2 = malloc (sizeof (int *) * 2);

	Arr2[0] = malloc (sizeof (int) * (High - Low + 1));
	Arr2[1] = malloc (sizeof (int) * (High - Low + 1));

	int i = Low, j = Mid + 1, k = 0, l = 0;

	while (i <= Mid && j <= High)
	{
		if (Arr[0][i] <= Arr[0][j])
		{
			Arr2[0][k] = Arr[0][i];
			Arr2[1][k] = Arr[1][i];

			Arr[2][Arr[1][i]] += Ctr;
			k += 1;
			i += 1;
		}

		else
		{
			Arr2[0][k] = Arr[0][j];
			Arr2[1][k] = Arr[1][j];
			Ctr ++;

			k += 1;
			j += 1;
		}
	}

	while (i <= Mid)
	{
		Arr2[0][k] = Arr[0][i];
		Arr2[1][k] = Arr[1][i];
		Arr[2][Arr[1][i]] += Ctr;

		k += 1;
		i += 1;

	}

	while (j <= High)
	{
		Arr2[0][k] = Arr[0][j];
		Arr2[1][k] = Arr[1][j];
		k += 1;
		j += 1;
	}

	for (i = Low; i <= High; i++)
	{
		Arr[0][i] = Arr2[0][i - Low];
		Arr[1][i] = Arr2[1][i - Low];
	}
}

void MergeSort (int **Arr, int Low, int High)
{
	int i = 0;

	if (Low < High)
	{
		int Mid = (Low + High) / 2;
		MergeSort (Arr, Low, Mid);
		MergeSort (Arr, Mid + 1, High);

		Merge (Arr, Low, High);
	}
}
