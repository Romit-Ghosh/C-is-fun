#include<stdio.h>
void main()
{
    struct info{
        char name[10];
        int roll_num,marks[10][10];
        int total;
    }inf[10];

    int i,j,n;
    for(i=1;i<=3;i++)
    {
        printf("information of %d candidate\n",i);
        printf("Enter name :");
        scanf("%s",inf[i].name);
        printf("Enter roll no :");
        scanf("%d",&inf[i].roll_num);
        for(j=1;j<=3;j++)
        {
            printf("enter marks of 3 subjects ");
            scanf("%d",&inf[i].marks[i][j]);
        }
    }

    for(i=1;i<=3;i++)
    { 
        printf("information of %d candidate\n",i);
        printf("Enter name :%s\n",inf[i].name);
        printf("Enter roll no :%d\n",inf[i].roll_num);
        int sum=0;
        for(j=1;j<=3;j++)
        {
            printf("marks of 3 subjects %d",inf[i].marks[i][j]);
            
            sum=sum+inf[i].marks[i][j];
        }
        
        printf("The total marks %d",sum);
        int percentage;
        percentage=sum/3;
        printf("The percentage is %d ",percentage);
    }

}