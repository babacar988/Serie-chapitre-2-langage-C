#include<stdio.h>
#include<math.h>

void main()
{
    int n,m;
    printf("Donner un indice de mois compris entre 1 et 12\n");
debut:
    scanf("%d", &n);
    printf("Donner une annee\n ");
    scanf("%d", &m);

    if(n==1){
    printf("C'est le mois de janvier, Elle compte 31 jours");
    }
    else if(n==2)
    {
    printf("C'est le mois de fevrier, Elle compte 28 jours");
    }
    else if(n==3)
    printf("C'est le mois de mars, Elle compte 31 jours");
    else if(n==4)
    printf("C'est le mois d'avril, Elle compte 30 jours");
    else if(n==5)
    printf("C'est le mois de mai, Elle compte 31 jours");
    else if(n==6)
    printf("C'est le mois de juin, Elle compte 30 jours");
    else if(n==7)
    printf("C'est le mois de juillet, Elle compte 31 jours");
    else if(n==8)
    printf("C'est le mois d'aout, Elle compte 31 jours");
    else if(n==9)
    printf("C'est le mois de septembre, Elle compte 30 jours");
    else if(n==10)
    printf("C'est le mois de octobre, Elle compte 31 jours");
    else if(n==11)
    printf("C'est le mois de novembre, Elle compte 30 jours");
    else if(n==12)
    printf("C'est le mois de decembre, Elle compte 31 jours");
    else
    {
    printf("Donner un indice de mois compris entre 1 et 12\n");
    goto debut;
    }


}
