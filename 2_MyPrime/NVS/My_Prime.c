#include <stdio.h>
#include <math.h>
#include <malloc.h>

int N = 0;
int CheckPrime(int* S, int Num);

int main(int argc, char const *argv[])
{
  int i = 0;
  scanf ("%d", &N);

  int* S = malloc (sizeof(int) * N);

  for (i = 0; i < N; i++)
    scanf("%d", &S[i]);

  for (i = 0; i < N; i++)
  {
    if (CheckPrime(S, S[i]) == 1)
    {
      printf("%d ", S[i]);
    }

  }
  return 0;
}

int CheckPrime(int* S, int Num)
{
  int i = 0;
  for (i = 0; i < N; i++)
  {
    if (S[i] < Num)
    {
      if (Num % S[i] == 0)
          return 0;
    }
  }

  return 1;
}
