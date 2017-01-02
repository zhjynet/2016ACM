#include<stdio.h>
int main()
{
    int n;
    double max ,min,sum,ave,a;
    while(~scanf("%d",&n))
    {
       max=0;
       min=100;
       sum=0;
       ave=0;
       for(int i=1;i<=n;i++)
       {
           scanf("%lf",&a);
           if(a>max)
            max=a;
           if(a<min)
            min=a;
            sum=sum+a;
       }
       ave=(sum-min-max)/(n-2);
       printf("%.2lf\n",ave);
    }
}
