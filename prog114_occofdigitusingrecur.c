#include<stdio.h>

int occ(int,int);

void main()
{
    long int n; 
    int k;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a key to find occurance of a digit : ");
    scanf("%d",&k);
    printf("The occurance of the digit %d is %d. ",k,occ(n,k));
}

int occ(int n,int k)
{
    if(n==0)
    return 0;
    else if(k==(n%10))
    return 1+occ(n/10,k);
    else
    return occ(n/10,k);
}