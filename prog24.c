#include<stdio.h>
void main()
{
    float hard,cc,tensile;
    printf("\n Enter the hardness, carbon content and tensile strenght: ");
    scanf("%f%f%f",&hard,&cc,&tensile);
    if (hard>50 && cc<.7 && tensile>5600)
    {
        printf("Grade 10\n");
    }
    else if (hard>50 && cc<.7 && tensile<=5600)
    {
        printf("Grande 9\n");
    }
    else if (hard<=50 && cc<.7 && tensile>5600)
    {
        printf("grade 8\n");
    }
    else if (hard>50 && cc>=.7 && tensile>5600)
    {
        printf("grade 7\n");
    }
    else if (hard>50 || cc<.7 || tensile>5600)
    {
        printf("Grade 6\n");
    }
    else 
    {
        printf("grade 5\n");
    }
}