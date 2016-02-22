#include <stdio.h>

// Finds the largst Num whose square is less than N.
int LargestSquare (int N)
{
  int i = 1, Sum = 0;
  while (Sum <= N)
  {
    Sum += i;
    i += 2;
  }

  return ((i - 1) / 2) - 1;
}

int main (void)
{
  int T = 0, N = 0, Num = 0;
  int Days = 0, Temp = 0;

  scanf ("%d", &T);

  while (T--)
  {
    scanf ("%d", &N);
    Num = LargestSquare(N);
    Days = 2 * Num - 1;
    N -= Num * Num;

    while (Num != 0)
    {
      Temp = N / Num;
      Days += Temp;
      N -= Temp * Num;
      Num--;
    }

    printf("%d\n", Days);
  }

  return 0;

}
