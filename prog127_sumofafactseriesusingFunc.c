#include<stdio.h>
int fact();
int pow();

void main()
{
    int n,f1;
    float sum=0.0;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f1=fact(i);

        sum=sum+/*(i*pow(i))*/1/(float)f1;
    }
    printf("sum of the series is %f",sum);
}

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

// int pow(int n)
// {
//     int f=1;
//     for(int i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }