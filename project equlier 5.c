#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,c;
    long n;
    for(n=1; n<300000000; n++)               //9334385320
    {
        c=0;
        for(i=1; i<=20; i++)
        {
            if(n%i==0)
               c=0;
            else
            {
                 c++;
                 break;
            }
        }
        if(c==0)
        {
            printf("%ld \n",n);
            break;
        }
    }
    return 0;
}

