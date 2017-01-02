#include<stdio.h>
#define PI 3.1415927
int main()
{
    double a,b;
    while(~scanf("%lf",&a))
    {
        b=4*PI*a*a*a/3;
        printf("%.3lf\n",b);
    }
    return 0;
}
