#include<stdio.h>
void main()
{
    int pos=0,neg=0,zero=0,num;
    char ans='y';
    while(ans=='y' || ans=='Y')
    {
        printf("\nenter a number :");
        scanf("%d",&num);
        if(num==0)
        zero++;
        if(num>0)
        pos++;
        if(num<0)
        neg++;
        printf("\n Do you want to continue?");
        scanf("%c",&ans);
    }
    printf("you entered %d positive numbers\n",pos);
    printf("you entered %d negative numbers\n",neg);
    printf("you entered %d zeros\n",zero);
}