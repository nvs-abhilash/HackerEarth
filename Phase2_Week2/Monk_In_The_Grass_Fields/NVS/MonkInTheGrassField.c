#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int Swap (int* Arr, int First, int Second)
{
  if (First == Second)
    return 1;

  Arr[First] = Arr[First] - Arr[Second];
  Arr[Second] = Arr[First] + Arr[Second];
  Arr[First] = Arr[Second] - Arr[First];
  return 0;
}

int Root(int Child)
{
    return (Child - 1) / 2;
}

int LeftChild(int Parent)
{
    return Parent * 2 + 1;
}

int RightChild(int Parent)
{
    return Parent * 2 + 2;
}

int MinHeapify(int* Arr, int Root, int Size)
{
    int Smallest = Root;
    int Left = LeftChild(Root);
    int Right = RightChild(Root);

    if ((Left < Size) && (Arr[Left] < Arr[Smallest]))
        Smallest = Left;

    if ((Right < Size) && (Arr[Right] < Arr[Smallest]))
        Smallest = Right;

    if (Smallest != Root)
    {
        Swap(Arr, Smallest, Root);
        MinHeapify (Arr, Smallest, Size);
    }

}

int MinBuildHeap(int* Arr, int Size)
{
    int i = Root(Size);
    while (i >= 0)
    {
        MinHeapify(Arr, i, Size);
        i--;
    }

    return 0;
}

int MaxHeapify(int* Arr, int Root, int Size)
{
    int Largest = Root;
    int Left = LeftChild(Root);
    int Right = RightChild(Root);

    if ((Left < Size) && (Arr[Left] > Arr[Largest]))
        Largest = Left;

    if ((Right < Size) && (Arr[Right] > Arr[Largest]))
        Largest = Right;

    if (Largest != Root)
    {
        Swap(Arr, Largest, Root);
        MaxHeapify (Arr, Largest, Size);
    }
}

int MaxBuildHeap(int* Arr, int Size)
{
    int i = Root(Size);

    while (i >= 0)
    {
        MaxHeapify(Arr, i, Size);
        i--;
    }
}

int HeapSort(int* Arr, int Size)
{
    if (Size <= 0)
        return 1;
    if (Size == 1)
        return 0;

    MaxBuildHeap(Arr, Size);

    while (Size --)
    {
        Swap(Arr, 0, Size);
        MaxHeapify(Arr, 0, Size);
    }

    return 0;
}


int main ()
{
	int T, N, K, i, j, RowCounter = 0, ColumnCounter = 0, Sum = 0;
	int *Row, *Column, **Arr;

	scanf ("%d", &T);

	while (T--)
	{
		Sum = 0;
		RowCounter = 0;
		ColumnCounter = 0;

		scanf ("%d%d", &N, &K);

		Arr = calloc (N, sizeof (int *));
		for (i = 0; i < N; i++)
		{
			Arr[i] = calloc (N, sizeof (int));
		}

		Row = calloc (N, sizeof (int) );
		Column = calloc (N, sizeof (int) );

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				scanf ("%d", &Arr[i][j]);
			}
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				Row[i] += Arr[i][j];
			}
		}

		for (j = 0; j < N; j++)
		{
			for (i = 0; i < N; i++)
			{
				Column[j] += Arr[i][j];
			}
		}

		HeapSort (Row, N);
		HeapSort (Column, N);

		for (i = 0; i < K; i++)
		{
			if (Row[0] + RowCounter < Column[0] + ColumnCounter)
			{
				Sum += Row[0] + RowCounter;

				Row[0] += N;

				MinHeapify (Row, 0, N);

				ColumnCounter += 1;
			}

			else if (Row[0] + RowCounter > Column[0] + ColumnCounter)
			{
				Sum += Column[0] + ColumnCounter;

				Column[0] += N;
				MinHeapify (Column, 0, N);

				RowCounter += 1;
			}

			else
			{
				j = 0;
				while (j < N && (Row[i] + RowCounter != Column[i] + ColumnCounter))
					j++;

				if ((j == N) || (Row[i] + RowCounter < Column[i] + ColumnCounter))
				{
					Sum += Row[0] + RowCounter;

					Row[0] += N;

					MinHeapify (Row, 0, N);

					ColumnCounter += 1;
				}

				else
				{
					Sum += Column[0] + ColumnCounter;

					Column[0] += N;
					MinHeapify (Column, 0, N);

					RowCounter += 1;
				}
			}

		}

		printf ("%d\n", Sum);
		free (Row);
		free (Column);

		for (i = 0; i < N; i++)
		{
			free (Arr[i]);
		}
	}

	return 0;
}
