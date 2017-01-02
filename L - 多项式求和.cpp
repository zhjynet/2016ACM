#include<stdio.h>
#include<math.h>
int main()
{
    double m,n,a,k;
    while(~scanf("%lf",&m))
    {
        for(int i=0;i<m;i++)
        {
            a=0;
            scanf("%lf",&n);
            for(k=1;k<=n;k++)

               a=a+1/k*pow(-1,k+1);
                printf("%.2lf\n",a);

        }
    }
    return 0;
}

