#include<stdio.h>
void main()
{
    int a[5][5] = {
        {8,3,9,0,10},
        {3,5,17,1,1},
        {2,8,6,23,1},
        {15,7,3,2,9},
        {6,14,2,6,0}
        };
        int sum=0;
    printf("Row total is: \n");

    //sum of row

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=a[i][j];
        }
        printf("   %d",sum);
        sum=0;
    }
    printf("\n");

//sum of column
        printf("Column total is= \n");

 for(int j=0;j<5;j++)
    {
        for(int i=0;i<5;i++)
        {
            sum+=a[i][j];
        }
        printf("   %d",sum);
        sum=0;
}
}