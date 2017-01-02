#include<stdio.h>
int main()
{
    int n,a[1000],j,k,s,w;
    while(~scanf("%d",&n))
    {
        if(n==0)
        {
            return 0;
        }
        else
        j=0;
        for(int i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
         k=a[0];
        }
            for(int i=0;i<n;i++)
        {
            if(k>a[i])
            {
            k=a[i];
             j=i;
            }
        }

        w=a[0];
        a[0]=k;
        a[j]=w;
        for(int i=0;i<n;i++)
        {
        printf("%d",a[i]);
        if(n-i!=1)
        printf(" ");
        }
        printf("\n");
    }
    return 0;
}
