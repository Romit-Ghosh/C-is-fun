//occurance of a digit in a number
#include <stdio.h>

int main() {
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	      int n;
	    scanf("%d",&n);
	    
	    int cnt=0;
	    while(n>0)
	    {
	        int m=(n%10);
	        
	        if(m==4) cnt++;
	        
	        n/=10;
	    }
	    printf("%d\n",cnt);
	}
	  
	
	return 0;
}