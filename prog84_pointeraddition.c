 #include<stdio.h>
 void main()
 {
    int a[30]={0,1,-1,10,11};
    int *p=&a[1];
    printf("%d\n",*p);
    p=p+2;
    printf("%d\n",*p);
 }