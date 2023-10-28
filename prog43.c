#include<stdio.h>
void main()
{
   int n,seen[10]={0},rem,N;
   printf("Enter the number: ");
   scanf("%d",&N);
   while(N>0)
   {
    rem=N%10;
    if(seen[rem]==1)
    break;
    seen[rem]=1;
    N=N/10;
   }
   if(N>0)
   printf("yep");
   else
   printf("nope");
}