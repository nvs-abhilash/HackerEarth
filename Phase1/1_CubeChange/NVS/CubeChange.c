#include <stdio.h>

int main()
{
  int T = 0;
  unsigned long N = 0;
  unsigned long Val = 0;
  scanf ("%i", &T);
  while (T--) {
    scanf ("%lu", &N);
    if (N == 1)
      Val = 1;
    else
      Val = (2 * N * N) + (N - 2) * ((4* N) - 4);

    printf ("%lu\n", Val);
  }

  return 0;
}
