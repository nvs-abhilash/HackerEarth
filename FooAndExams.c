#include <stdio.h>

// Global variables.
int ABC = 0, A3B2 = 0, A3 = 0;

int CompareStress (char* F, char* K);
void Find_t (char* F, char* K, int t);
void CalculateF (char* F, int t);
void Shift (char* F, int Last);

int main (void)
{
  // Set the global variables value.
  // Preset the F with D.
  // Call Find_t with parameters F, K, 0

  int T = 0, a = 0, b = 0, c = 0, d = 0, i = 0;
  char K [20];
  char F [20];

  scanf ("%d", &T);

  while (T--)
  {
    printf ("Enter values: ");
    scanf ("%d%d%d%s%s", &a, &b, &c, F, K);

    printf ("Scanned Values : \na-%d \nb-%d \nc-%d \nF-%s \nK-%s \n", a, b, c, F, K);

    ABC = a + b + c;
    A3 = 3 * a;
    A3B2 = A3 + 2 * b;

    printf ("\nCalling Find_t");

    Find_t(F, K, 0);

  }
  return 0;
}

void Shift (char* F, int Last)
{
  while (Last > 0)
  {
    F[Last] = F[Last - 1];
    Last --;
  }
}


void CalculateF (char* F, int t)
{
  // ABCD + A3B2 * t + 3A * t^2
  int Val = ABC + (A3B2 * t) + (A3 * t * t);
  int i = 0, j = 0, Sum = 0, Carry = 0;
  while (F[i++] != '\0');
  i -= 2;
  printf ("\ni = %i", i);
  while (Val > 0 && i >= 0)
  {
    Sum = (F[i] - '0') + (Val % 10) + Carry;

    if (Sum / 10 == 0)
      Carry = 0;
    else
      Carry = 1;

    F[i] = Sum % 10 + '0';

    i--;
    Val /= 10;
  }

  if (i < 0)
  {
    while (Val > 0)
    {
      while (F[j++] != '\0');
      printf ("\nCalling Shift");
      Shift (F, j);
      Sum = Val % 10 + Carry;
      if (Sum / 10 == 0)
        Carry = 0;
      else
        Carry = 1;

      F[0] = Sum % 10 + '0';


      printf ("\nF = %s", F);
      Val /= 10;
    }
  }
}

int CompareStress (char* F, char* K)
{
  int i = 0, j = 0;

  while (F[i++] != '\0');
  while (K[j++] != '\0');

  if (i < j)
    return 0;

  if (i > j)
    return 1;

  if (i == j)
  {
    i = 0;
    while (F[i] != '\0')
    {
      if (F[i] < K[i])
        return 0;

      if (F[i] < K[i])
        return 1;

      if (F[i] == K[i])
        i++;
    }

    return 0;
  }
}

void Find_t (char* F, char* K, int t)
{
  printf ("\nCalling CompareStress");

  int X = CompareStress (F, K);
  printf ("\nX = %d, for F = %s, K = %s", X, F, K);
  if (X)
  {
    printf("%d\n", t - 1);
  }

  else
  {
    printf ("\nCalling CalculateF");
    CalculateF(F, t );

    printf ("\nCalling Find_t...");
    Find_t(F, K, (t + 1));
  }
}
