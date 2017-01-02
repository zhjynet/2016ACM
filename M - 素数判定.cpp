#include<stdio.h>
int main()
{
    int x,y,w,k,d;
    while(~scanf("%d %d",&x,&y))
    {
        if(x==0&&y==0)
            return 0;
        else
     {
        w=0;

        for(int i=x;i<=y;i++)
        {
             k=i*i+i+41;

             for(int j=2;j<k;j++)
             {
                d=k%j;
                if(d==0)
                w++;
             }
        }

        if(w==0)
        printf("OK\n");
        else
        printf("Sorry\n");
     }

     }
     return 0;
}
