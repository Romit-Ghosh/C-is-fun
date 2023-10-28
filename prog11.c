#include<stdio.h>
#include<math.h>
void main()
{
  int x,y;
  float phi,r,p;
  printf("Enter the cartesian coordinates (x,y) : ");
  scanf("%d%d",&x,&y);
   //calculate value of r
   r= sqrt (x*x+y*y);
   //calculate the value of phi
   //for tan inver use atan()
   phi= atan(y/x);
   printf("The polar coordinates of (%d,%d) is (%f,%f)",x,y,r,phi);   
   p=3.141592;
   phi=phi*(180/p);
   printf("The polar coordinates in degree is : (%f,%f)\n",r,phi);
}

