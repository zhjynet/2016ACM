#include<stdio.h>
int main()
{
    int a;
    while(~scanf("%d",&a))
    {
        if(a<=100&&a>=90)
            printf("A\n");
        if(a<90&&a>=80)
            printf("B\n");
        if(a<80&&a>=70)
            printf("C\n");
        if(a<70&&a>=60)
            printf("D\n");
        if(a<60&&a>=0)
            printf("E\n");
        if(a>100||a<0)
            printf("Score is error!\n");
    }
    return 0;
}
