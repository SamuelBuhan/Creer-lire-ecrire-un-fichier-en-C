#include "creer.h"
#include <stdio.h>
#include <string.h>

#define TAILLE_BUFFER 512

int creation()
{
    printf("Entrez le nom du fichier : ");
    char nom[TAILLE_BUFFER];
    fgets(nom, TAILLE_BUFFER, stdin);
    nom[strlen(nom) - 1] = '\0';
    FILE * pFile = fopen(nom, "a");
    if (pFile == NULL) return -1;

    if (fclose(pFile) != 0) return -1; 

    return 0;
}