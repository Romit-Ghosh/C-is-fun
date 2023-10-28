/*A0 has dimensions 1189 x 841. each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides.
thus paper of size A1 would have dimensions 841 x 1189. write a program to calculate and print paper sizes A0,A1,A2,..,A8.*/

#include<stdio.h>
void main()
{
    int width=1189,height=841,temp;
    for(int i=0;i<=8;i++)
    {
        printf("A%d = %d x %d\n",i,width,height);
        temp=width;
        width=height;
        height=temp/2;
    }
}