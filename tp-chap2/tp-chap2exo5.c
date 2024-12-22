#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    printf("Donner un nombre entier\n");

    debut:
    scanf("%d", &n);
    if (n==0)
        puts("le nombre saisi est null");
        else if(n==1 || n==2)
        puts("le nombre saisi est petit");
        else if(n==3)
        puts("le nombre saisi est moyen");
        else if(n==4 || n==5)
        puts("le nombre saisi est grand");
        else if(n>5)
        puts("le nombre saisi est hors norme");
        else{
        puts("Il faut saisir une valeur positive");
        goto debut;
        }


}
