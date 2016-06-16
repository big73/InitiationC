#include <stdio.h>
#include <stdlib.h>

//calculatrice console terminée
int main(int argc, char const *argv[])
{
	int choix = 0;

	while(1)
	{
		printf("############# Calculatrice Console ############\n");
		printf("- 1 - pour une addition\n");
		printf("- 2 - pour une soustraction\n");
		printf("- 3 - pour une multiplication\n");
		printf("- 4 - pour une division\n");
		printf("- 0 - pour quitter le programme\n\n");
		printf("Quel est votre choix ?\n");
		scanf("%d", &choix);

		//si on doit utiliser des variables dans des switch
		//alors il faut utiliser des {} pour déterminer le bloc
		switch(choix)
		{
			case 0 :
				quitter();
				break;
			case 1 :
			{				
				int ra = addition();
				printf("résultat de l'addition : %d\n", ra);
				break;
			}
			case 2 :
			{				
				int rs = soustraction();
				printf("résultat de la soustraction : %d\n", rs);
				break;
			}
			case 3 :				
			{
				int rm = multiplication();
				printf("résultat de la multiplication : %d\n", rm);
				break;
			}
			case 4 :				
			{
				int rd = division();
				printf("résultat de la multiplication : %d\n", rd);
				break;
			}
			default:
				printf("mauvaise saisie au clavier\n");
				break;
		}
	}
		
	return 0;
}

int addition()
{
	//printf("appel de la fonction d'addition\n");
	int op1 = 0, op2 = 0;
	printf("saisir un premier nombre\n");
	scanf("%d", &op1);
	printf("saisir un second nombre\n");
	scanf("%d", &op2);
	return op1 + op2;
}

int soustraction()
{
	//printf("appel de la fonction de soustraction\n");
	int sopa = 0, sopb =0;
	printf("saisir un premier nombre\n");
	scanf("%d", &sopa);
	printf("saisir un second nombre\n");
	scanf("%d", &sopb);
	return sopa - sopb;
}

int multiplication()
{
	//printf("appel de la fonction de multiplication\n");
	int mopa = 0, mopb =0;
	printf("saisir un premier nombre\n");
	scanf("%d", &mopa);
	printf("saisir un second nombre\n");
	scanf("%d", &mopb);
	return mopa * mopb;
}

int division()
{
	//printf("appel de la fonction de division\n");
	int dopa = 0, dopb =0;
	printf("saisir un premier nombre\n");
	scanf("%d", &dopa);
	printf("saisir un second nombre\n");
	scanf("%d", &dopb);
	return dopa / dopb;
}

int quitter()
{
	printf("Bye\n");
	exit(0);
}