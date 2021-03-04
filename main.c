#include "ecriture.h"
#include "lecture.h"
#include "creer.h"
#include <stdio.h>
#include <unistd.h>

void help();


void help() 
{
    printf("1. Lire un fichier\n");
    printf("2. Créer un fichier\n");
    printf("3. Écrire dans un fichier\n");
    printf("\nVotre choix ? ");
}


int main(int argc, char* argv[]) 
{

    while(1)
    {
        help();
        char choix;
        choix = fgetc(stdin);
        fgetc(stdin);
        switch (choix)
        {
            case '1': printf("%s\n", lecture() == 0 ? "Succes" : "Echec");break;
            case '2': printf("%s\n", creation() == 0 ? "Succes" : "Echec");break;
            case '3': printf("%s\n", ecriture() == 0 ? "Succes" : "Echec");break;
            default : printf("Choix non détecté!\n"); sleep(1);
        }

    }
    return 0;
}