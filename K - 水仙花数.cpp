#include<stdio.h>
int main()
{
    int m,n,a,b,c,d;
    while(~scanf("%d %d",&m,&n))
    {
        d=0;
    for(int i=m;i<=n;i++)
    {
        a=i/100;
        b=i/10%10;
        c=i%10;
        if(i==a*a*a+b*b*b+c*c*c)
        {
            if(d==0)
                printf("%d",i);
            else
            printf("% d",i);
            d=d+1;
        }
    }
    if(d==0)
    printf("no\n");
    else
    printf("\n");
    }
    return 0;
}
