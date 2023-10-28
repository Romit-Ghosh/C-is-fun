#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks[5];
}s[5];

void main()
{
    int sum=0,avg;
    printf("Enter the info of student :\n");
    for(int i=0;i<5;i++)
    {
        printf("For roll no. %d",i+1);
        printf("enter name : ");
       scanf("%s",s[i].name);
       printf("Enter marks :");
       scanf("%d",&s[i].marks);

       for(int j=0;j<5;j++)
       {
           scanf("%f",&s[i].marks[j]);
           sum=sum+s[i].marks[j];
       }
       avg=sum/5.0;
    }
    printf("Average is %d",avg);

}