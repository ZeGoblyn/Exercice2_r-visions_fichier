#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define nm 20
#define pm 15
#define num 11

typedef struct Contact
{
	char Nom[10];
	char Prenom[10];
	int Age;
	char Numero[10];
}Contact;


int main()
{
	FILE* fichier;

	if (fichier != NULL)
	{
		fichier = fopen("répertoir.txt", "a");
	}
	else
	{
		fichier = fopen("répertoir.txt", "w");
	}

	char donneeN[nm];
	char donneeP[nm];
	int x[3];
	char donneeNu[num];

	Contact *NewContact = malloc(sizeof(Contact));

	if (fichier != NULL)
	{
		printf("Ajouter du texte:\n");
		printf("Nom\n");
		fgets(donneeN, nm, stdin);
		fputs(donneeN, fichier);

		getchar();

		printf("Prenom\n");
		fgets(donneeP, pm, stdin);
		fputs(donneeP, fichier);

		getchar();

		printf("Age\n");
		fgets(x, 10, stdin);
		fputs(x, fichier);

		getchar();

		printf("Numero\n");
		fgets(donneeNu, num, stdin);
		fputs(donneeNu, fichier);

		getchar();
	}
	else
	{
		perror("Error");
	}


    return 0;
}
