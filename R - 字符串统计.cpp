#include<stdio.h>
int main()
 {
    int n,a;
    char s[1000000];
    while(~scanf("%d",&n))
    {
        getchar();
        for(int i=0;i<n;i++)
        {
            gets(s);
            a=0;
            for(int j=0;s[j]!='\0';j++)
            {
                if((s[j]<='9')&&(s[j]>='0'))
                a=a+1;
            }
            printf("%d\n",a);

        }
    }
    return 0;
 }
