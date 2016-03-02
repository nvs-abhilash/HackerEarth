#include<stdio.h>
int main()
{
int T;
scanf("%d",&T);
int classes , temp,days,k;
while(T!=0)
{
    k=1;
    days=0;
    scanf("%d",&classes);
    temp=classes;
    if(classes>2)
    {
        days=2;
        classes=classes-2;
        temp=classes;
    }
    while(classes!=0)
    {
        if(classes-2*k > 2)
        {
            k=k+1;
            classes=classes- 2*(k);
            temp=classes;
            days=days+2;
        }
        else if(classes-2*k>=0 && classes- 2*k <2)
        {
            k=k;
            classes=classes- 2*k;
            temp=classes;
            days=days+2;

        }


        else if(classes<=k+1)
    {
        k=temp;
        classes=0;
        temp=0;
        days=days+1;

    }
     else if(classes>k+1)
        {   k=k+1;
            classes=classes-k;
            days=days+1;


        }
    }

T--;
printf("%d\n",days);
}
return 0;

}

