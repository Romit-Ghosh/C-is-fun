#include<stdio.h>
void main()
{
    float l,b,r,area_rec,peri_rec,area_circ,peri_circ;
    printf("Enter length and breadth of rectangle :");
    scanf("%f%f",&l,&b);
    area_rec=l*b;
    peri_rec=2*(l+b);
    printf("The area and perimeter of rectangle is respectively :%f,%f",area_rec,peri_rec);
    printf("\nEnter the radius of circle :");
    scanf("%f",&r);
    area_circ= 3.14*r*r;
    peri_circ= 2*3.14*r;
    printf("The area and perimeter of circle is respectively :%f,%f",area_circ,peri_circ);


}