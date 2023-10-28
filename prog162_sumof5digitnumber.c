#include <stdio.h>

int main() {
    int num, sum = 0,r;
    
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    
    // Separate each digit and add them up
    for(int i=1;num;i++)
    {
        r=num%10;
        sum+=r;
        num/=10;
    }
    
    printf("The sum of the digits is %d\n", sum);
    
    return 0;
}
