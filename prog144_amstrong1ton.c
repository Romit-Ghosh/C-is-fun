#include <stdio.h>
#include <math.h>

int isArmstrong();

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", isArmstrong(i));
        }
    }

    return 0;
}

int isArmstrong(int num)
{
    int n=0,r,sum=0,temp=num,initial;
    while(temp>0)
    {
        temp/=10;
        ++n;
    }
    initial=num;
    for(int i=1;num;i++)
    {
        if(num>0)
        {
            r=num%10;
            sum+=pow(r,n);
            num/=10;
        }
    }
    if(sum==initial)
    return sum;
    else
    return 0;
}