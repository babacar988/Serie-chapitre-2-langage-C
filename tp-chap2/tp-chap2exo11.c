#include<stdio.h>

int main()
{
    int a,b,c;


    printf("saisir une heure en format (h : min : s)\n");
    scanf("%d %d %d",&a ,&b , &c);


    if ((a >= 0 && a<=23) && (b >= 0 && b<=59) && (c>=0 && c<=59))
    {
        printf("L'heure saisi est %dh%dmin%ds \n",a,b,c);


        c=c+1;
        printf("L'heure qu'il fera 1s apres est %dh%dmin%ds:\n",a,b,c);

    }
    else
        printf("L'heure n'est pas valide");


}
