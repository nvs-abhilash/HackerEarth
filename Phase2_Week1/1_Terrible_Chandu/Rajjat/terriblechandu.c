#include<stdio.h>

int main()
{
int T,i,j;
scanf("%d",&T);
fflush(stdin);

char str[100] ,temp;

    while(T!=0)
    { j=0;
        fflush(stdin);
    gets(str);
    while (str[j]!='\0')
    {
    j++;
    }

    i = 0;
   j = j - 1;

   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
	for(int z=0;str[z]!='\0';z++)
        printf("%c",str[z]);
	T--;
    }
return 0;
}
