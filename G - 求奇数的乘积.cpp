#include<stdio.h>
int main()
{
    int a,b,c;
    while(~scanf("%d",&a))
    {
        c=1;
        for(int i=0;i<a;i++)
        {
            scanf("%d",&b);
            if(b%2==1)
            c=c*b;
            else ;

        }
        printf("%d\n",c);
    }
    return 0;
}
