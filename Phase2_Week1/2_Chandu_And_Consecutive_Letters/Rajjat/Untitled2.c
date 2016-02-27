#include<stdio.h>

int main()
{
int T,i,j;
scanf("%d",&T);
fflush(stdin);

char str[30] ,result[30];
while(T!=0)
    {
        i=0;
        fflush(stdin);
    scanf("%s",&str);

    for(j=0;str[j]!='\0';j++)
    {
        if(j==0)
        {
            result[i]=str[j];
            i++;

        }

        if(str[j-1]!=str[j] && j!=0)
        {
            result[i]=str[j];
            i++;
        }

    }
    result[i]='\0';
    printf("%s\n",result);
    T--;
    }
    return 0;
    }

