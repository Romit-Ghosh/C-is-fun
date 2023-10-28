#include<stdio.h>
#include<math.h>
void main()
{
    int M,C,P,B,E,AGG,PERCENTAGE;
    printf("Enter marks obatined in different subjects respectively :");
    scanf("%d%d%d%d%d",&M,&C,&P,&B,&E);
    AGG=(M+C+P+B+E)/5;
    PERCENTAGE=(M+C+P+B+E)*100/500;
    printf("Aggregrate and percentage respectively are :%d,%d",AGG,PERCENTAGE);

}