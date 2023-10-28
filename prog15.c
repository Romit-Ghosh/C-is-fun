//finding areas using switch
#include<stdio.h>
int main()
{
    int n;
    printf("Enter 1. for area of circle\n2. for area of rectangle\n3. for area of triangle");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : float r;
        float pi=3.14,aoc;
        aoc=pi*r*r;
        printf("area od circle is :%f",aoc);
        break;
        case 2 : float l=2,b=2;
        float aor;
        aor=l*b;
        printf("area of rectangle is : %f",aor);
        break;
        case 3 : float a=2,b=2;
        float aot;
        aot=1/2*a*b;
        printf("area of triangle is : %f",aot);
        break;
        default : printf("invalid");

    }
    return 0;
}