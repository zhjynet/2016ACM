#include<stdio.h>
int main()
{
    int n,a,b,c;
    double d[101];
    while(~scanf("%d",&n)&&n!=0)
    {
        for(int i=0;i<n;i++)
        scanf("%lf",&d[i]);
        a=b=c=0;
        for(int i=0;i<n;i++)
        {
            if (d[i]<0)
                a++;
            else if(d[i]==0)
                b++;
            else
                c++;
        }
        printf("%d %d %d\n",a,b,c);
    }
}
