#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    while(~scanf("%d",&n))
    {
        if(n==0)
        {
            return 0;
        }
        else if(n>0&&n<4)
        {
            printf("%d\n",n);
        }
        else
        {
            a=1,b=2,c=3,d=0;
            for(int i=3;i<n;i++)
            {
                d=a+c;
                a=b;
                b=c;
                c=d;
            }
            printf("%d\n",d);
        }
    }
    return 0;
}
