#include<stdio.h>
void main()
{
  int x,y;
  printf("Enter the coordinates (x,y) : ");
  scanf("%d%d",&x,&y);
  if(x==0 && y!=0)
  {
    printf("the coordinates lie on y axis");
  }
  else if(y==0 && x!=0)
  {
    printf("the coordinates lies on x axis");
  }
  else if(x==0 && y==0)
  {
    printf("lies on origin");
  }
  else{
    printf("lies on xy plane");
  }
}