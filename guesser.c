#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int n,g,c=0;
	srand(time(0));   //seed the rand function
	n = rand() % 100 + 1;
	//printf("%d",n);                     //uncomment it to see the generated random number
	printf("Enter a number between 1 and 100\n");
	while (g!=n)
	{
		printf("Enter guess: ");
		scanf("%d",&g);
		if (g<n){
		printf("enter higher guess\n");
		c++;
		}
		else if (g>n){
		printf("enter lower guess\n");
		c++;
		}
		else
		printf("you guessed the number in %d attempts",c+1);
		
	}
}        