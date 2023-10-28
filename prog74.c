#include <stdio.h>

int main(void) 
{
	int t;
	char ch;
	scanf("%d",&t);
	fflush(stdin);
	while(t--)
	{
	    fflush(stdin);
	    scanf("%c\n",&ch);
	    if(ch=='B')
	    printf("BattleShip\n");
	    else if(ch=='c')
	    printf("Cruiser\n");
	    else if(ch=='D')
	    printf("Destroyer\n");
	     else if(ch=='f' || ch=='F')
	    printf("Frigate\n");
	}
	return 0;
}

