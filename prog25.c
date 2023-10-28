#include<stdio.h>
void main()
{
    float wt,ht,bmi;
    printf("\n Enter weight and height :");
    scanf("%f%f",&wt,&ht);
    bmi=wt/(ht*ht);
    printf("Body Mass Index is: %f",bmi);
    if(bmi<15)
    {
        printf("BMI catagory: Starvation");
    }
    else if(bmi>=15.1 && bmi<=17.5)
    {
        printf("BMI catagory: Anorexic");
    }
    else if(bmi>=17.6 && bmi<=18.5)
    {
        printf("BMI catagory: Underweight");
    }
    else if(bmi>=18.6 && bmi<=24.9)
    {
        printf("BMI catagory: ideal");
    }
    else if(bmi>=25 && bmi<=25.9)
    {
        printf("BMI catagory: Overweight");
    }
    else if(bmi>=30 && bmi<=30.9)
    {
        printf("BMI catagory: Obese");
    }
    else if(bmi>=40)
    {
        printf("BMI catagory: Morbidly Obese");
    }
    else
    {
        printf("invalid input");
    }

}