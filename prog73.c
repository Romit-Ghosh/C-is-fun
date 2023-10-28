#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,sum;
        scanf("%d %d %d",&a,&b,&c);
        sum=a+b+c;
        if(sum==180)
        printf("YES");
        else
        printf("NO");
    }
	return 0;
}

