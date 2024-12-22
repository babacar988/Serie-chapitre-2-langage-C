#include<stdio.h>
#include<math.h>

void main()
{
    char choix;
    int n;
    printf("Donner une annee\n");
    scanf("%d", &n);
    printf("Donner un indice de mois\n");

    getchar();

    choix =(char) getchar();
    switch (choix)
    {

        case '1' : printf("C'est le mois de janvier, Elle compte 31 jours");
                break;
        case '2' : printf("C'est le mois de fevrier, Elle compte 28 jours");
                break;
        case '3' : printf("C'est le mois de mars, Elle compte 31 jours");
                break;
        case '4' : printf("C'est le mois d'avril, Elle compte 30 jours");
                break;
        case '5' : printf("C'est le mois de mai, Elle compte 31 jours");
                break;
        case '6' : printf("C'est le mois de juin, Elle compte 30 jours");
                break;
        case '7' : printf("C'est le mois de juillet, Elle compte 31 jours");
                break;
        case '8' : printf("C'est le mois d'aout, Elle compte 31 jours");
                break;
        case '9' : printf("C'est le mois de septembre, Elle compte 30 jours");
                break;
        case '10': printf("C'est le mois de octobre, Elle compte 31 jours");
                break;
        case '11': printf("C'est le mois de novembre, Elle compte 30 jours");
                break;
        case '12': printf("C'est le mois de decembre, Elle compte 31 jours");
                break;

        default :  printf("Donner un indice de mois compris entre 1 et 12\n");

    }
return 0;


}
