#include<stdio.h>
int main()
{
    int n,m,a,b,k,w,l,e,s,d,r;
    while(~scanf("%d%d",&n,&m))
    {
         s=0;e=0;l=0;
         if(n<=m)
         {
            for(int i=0;i<n;i++)
            {
            s=s+2;
            e=e+s;
            k=e/n;
            }
            printf("%d\n",k);
         }
         else
         {
            w=n%m;
            r=0;
            for(int i=1;i<=n-w;i++)
            {
            s=s+2;
            l=l+s;
            e=e+s;
            if(i%m==0)
             {
             k=e/m;
             e=0;
             if(r)
              printf(" ");
             printf("%d",k);
              r=r+1;
             }

            }
            s=0;
            if(w!=0)
            {
            for(int j=0;j<n;j++)
            {
                s=s+2;
                e=e+s;

            }

            d=e-l;
            k=d/w;
             printf(" ");
            printf("%d",k);
            }
            printf("\n");
         }

    }
    return 0;
}
