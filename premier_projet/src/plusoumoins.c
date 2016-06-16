#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	const int MAX = 100, MIN = 1;
	int nombreMystere;
	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
	int r = -1;

	//printf("%d\n", nombreMystere);
	printf("saisir un nombre\n");
	while(r != nombreMystere)
	{		
		scanf("%d", &r);
		if(r < nombreMystere)
		{
			printf("plus\n");
		}
		else if(r > nombreMystere)
		{
			printf("moins\n");
		}
		else
		{
			printf("bravo nombre mystère = %d et votre saisie = %d\n", nombreMystere, r);
		}
	}
	return 0;
}