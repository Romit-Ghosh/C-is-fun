#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8},n=0;
    
    for(int i=0;i<10;i++)
    {
        if(arr[i]<35)
        {
            printf("%d  ",i);
        }
    }
    n=sizeof(arr)/sizeof(int);
    printf("%d",n);
    return 0;
}