#include<stdio.h>
int main()
{
    double a;
    while(~scanf("%lf",&a))
    {
        if (a<0)
            a=-a;
        else
            a=a;
        printf("%.2lf\n",a);
    }
}
