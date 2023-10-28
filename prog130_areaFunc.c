#include<stdio.h>
int all();
 void main()
 {
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    all(r);
 }

 int all(int r)
 {
    float area,diameter,circumference;
    area=3.14*r*r;
    circumference=2*3.14*r;
    diameter=2*r;
    printf("Area =%f\nCircumference = %f\n Diameter = %f\n",area,circumference,diameter);
 }