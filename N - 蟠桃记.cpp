#include<stdio.h>
int main()
{
    int n;
    int a[30];
    while(~scanf("%d",&n))
    {
        a[1]=1;
        for(int i=2;i<=n;i++)
            a[i]=(a[i-1]+1)*2;
        printf("%d\n",a[n]);

    }
    return 0;
}
