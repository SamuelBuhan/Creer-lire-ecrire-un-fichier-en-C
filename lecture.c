#include "lecture.h"
#include <stdio.h>
#include <string.h>

#define TAILLE_BUFFER 512

int lecture()
{
    printf("Entrez le nom du fichier : ");
    char nom[TAILLE_BUFFER];
    fgets(nom, TAILLE_BUFFER, stdin);
    nom[strlen(nom) - 1] = '\0';
    FILE * pFile = fopen(nom, "r");
    if (pFile == NULL) return -1;

    printf("------------------TEXTE------------------\n");
    char ligne[TAILLE_BUFFER];
    while ( !feof( pFile )) 
    {
        fgets(ligne , TAILLE_BUFFER, pFile);
        printf("%s",ligne);
        ligne[0] = '\0';
    }

    printf("-----------------------------------------\n");
    if (fclose(pFile) != 0) return -1; 

    return 0;
}