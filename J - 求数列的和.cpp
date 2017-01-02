#include<stdio.h>
#include<math.h>
int main()
{
    double n,m,z;
    while(~scanf("%lf %lf",&n,&m))
    {
        z=n;
        for(int i=1;i<m;i++)
        {
            n=sqrt(n);
            z=z+n;
        }
        printf("%.2lf\n",z);
    }
}
