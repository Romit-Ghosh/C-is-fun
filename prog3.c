//convert distance in km to other units
#include<stdio.h>
void main()
{
    int dist,dist_meters,dist_feet,dist_inches,dist_centi;
    printf("enter distance in km :");
    scanf("%d",&dist);
    dist_meters=1000*dist;
    dist_feet=3281*dist;
    dist_inches=3281*dist*12;
    dist_centi=100000*dist;
    printf("conversions respectively are : %d\n%d\n%d\n%d\n", dist_centi,dist_feet,dist_inches,dist_meters);

}