#include <stdio.h>
#include <math.h>
int main()
{
  int i=0,flag=0,N;
  scanf ("%d",&N);
  int number[N];
  for (i=0 ; i<N ; i++)
    scanf("%d",&number[i]);
  for (i = 0; i < N; i++)
  {
    for (int j=0; j<N; j++)
        {
            if(number[i]>number[j] && number[i]%number[j]==0)
            {
                flag=0;
                break;
            }
            else flag=1;
        }
    if(flag==1)
    printf("%d ",number[i]);
  }
  return 0;
}
