// Merge sort.

#include <stdio.h>
#include <malloc.h>
void Merge (int A[], int Start, int End)
{
  if (Start < End)
  {
    int Mid = (Start + End)/ 2;
    int i = Start;
    int j = Mid + 1;
    int k = 0;

    int *Arr2 = malloc (sizeof (int) * (End - Start + 1));
    while ((i <= Mid) && (j <= End) )
    {
      if (A[i] < A[j] )
      {
        Arr2[k++] = A[j++];
      }

      else if (A[i] >= A[j])
      {
        Arr2[k++] = A[i++];
      }
    }

    while (i <= Mid)
    {
      Arr2[k++] = A[i++];
    }

    while (j <= End)
    {
      Arr2[k++] = A[j++];
    }

    for (i = Start; i <= End; i++)
    {
      A[i] = Arr2[i - Start];
    }
  }

}

void MergeSort (int A[], int Start, int End)
{

	if (Start < End)
	{
    int Mid = (Start + End) / 2;
		MergeSort(A, Start, Mid);
		MergeSort(A, Mid + 1, End);

		Merge(A, Start, End);
	}
}

int main()
{
  int i = 0;

  int T = 0, N = 0;
  scanf ("%d", &T);
  int* Arr;
  while (T--)
  {
  	scanf ("%d", &N);
  	Arr = malloc (sizeof (int) * N);

  	for (i = 0; i < N; i++)
  		scanf ("%d", &Arr[i]);

  	MergeSort(Arr, 0, N - 1);
  	for (i = 0; i < N; i++)
    	printf ("%d ", Arr[i]);

	printf ("\n");
	free (Arr);
  }

  return 0;
}
