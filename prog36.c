#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
void main()
{
    int y,row,column;
    row=1;
    printf("                     MULTIPLICATION TABLE           \n");
    printf("---------------------------------------------------------------\n");
    do    //outer loop begins
    {
        column=1;
        do   //INNER LOOP BEGINS
        {
            y=row*column;
        printf("%6d",y);
        column++;
        }
        while(column<=COLMAX);//INNER LOOP ENDS
        printf("\n");
        row++;
    }
    while(row<=ROWMAX);// OUTER LOOP ENDS
    printf("---------------------------------------------------------------\n");
}