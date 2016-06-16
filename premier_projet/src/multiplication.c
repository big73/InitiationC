#include <stdio.h>
#include <stdlib.h>

//multiplication de deux entiers et affichage sur la sortie standard
int main(int argc, char const *argv[])
{
	int resultat = 0, op1 = 0, op2 = 0;

	printf("saisissez un premier nombre\n");
	scanf("%d", &op1);
	printf("saisissez un second nombre\n");
	scanf("%d", &op2);
	resultat = op1 * op2;
	printf("resultat : %d\n", resultat);
	return 0;
}