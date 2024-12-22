#include<stdio.h>
#include<string.h>




int main()
{
    int j,m,a;

    printf("saisir une date en format (jour / mois / annee)\n");
    scanf("%d %d %d",&j ,&m , &a);

    if ((j >= 1 && j<=31) && (m >= 1 && m<=12) && (a>=1))
        {
            printf("La date saisie est valide et est %d / %d / %d :\n",j,m,a);
        }
    else
        {
            printf("La date saisie n'est pas valide");
        }

}

