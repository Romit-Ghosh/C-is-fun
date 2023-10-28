#include<stdio.h>
void main()
{
    struct info{
        char name[10];
        int roll_num,marks1,marks2,marks3;
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
        printf("Enter marks 1:");
        scanf("%d",&inf[i].marks1);
        printf("Enter marks 2:");
        scanf("%d",&inf[i].marks2);
        printf("Enter marks 3:");
        scanf("%d",&inf[i].marks3);
    }

    for(i=1;i<=3;i++)
    { 
        printf("information of %d candidate\n",i);
        printf("name is :%s\n",inf[i].name);
        printf("roll no:is%d\n",inf[i].roll_num);
        printf("marks 1:is%d\n",inf[i].marks1);
        printf("marks 2:is%d\n",inf[i].marks2);
        printf("marks 3:is%d\n ",inf[i].marks3);
        int sum=0;
        sum=sum+inf[i].marks1+inf[i].marks2+inf[i].marks3;
        printf("The total marks %d",sum);
        int percentage;
        percentage=sum/3;
        printf("The percentage is %d ",percentage);
    }
}
