#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial=0;
	
	do
	{
		printf("Guess a number: ");
		scanf("%d", &x);
		trial++;
		
	    if (x>59)
		    printf("high!\n");
		if (x<59)
		    printf("low!\n");	 
		
	}
	while( x!= answer );
	
	
    printf("Congratulation! Number of trial = %i ",trial);
    
	return 0;
}
