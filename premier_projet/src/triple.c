#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
	int resultat = 0, op = 0;

	printf("saisir un nombre à tripler\n");
	scanf("%d", &op);
	resultat = triple(op);
	printf("resultat de l'opération : %d\n", resultat);
	return 0;
}

int triple(int operande)
{
	return 3 * operande;
}