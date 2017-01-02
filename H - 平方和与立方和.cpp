#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(~scanf("%d%d",&a,&b))
    {
        c=d=0;
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        for(int i=a;i<=b;i++)
        {
            if(i%2==0)
                c+=(i*i);
            else
                d+=(i*i*i);
        }
        printf("%d %d\n",c,d);
    }
    return 0;
}
