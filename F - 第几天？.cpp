#include<stdio.h>
int main()
{
    int a[2][12]={ {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}};
    int y,m,d;
    while(~scanf("%d/%d/%d",&y,&m,&d))
    {
        int n=0;
        if((y%400==0)||(y%100!=0)&&(y%4==0))
        {
            for(int i=m-2;i>=0;i--)
                n+=a[1][i];
        }
        else{
            for(int i=m-2;i>=0;i--)
                n+=a[0][i];
        }

        printf("%d\n",n+d);
    }
    return 0;
}

