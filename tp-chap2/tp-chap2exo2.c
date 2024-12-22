#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    printf("Donner un nombre entier\n");
    scanf("%d", &n);

    if (n > 0)
        printf("la nombre saisie est positif");
        else if(n < 0)
        printf("la nombre saisie est negatif");

        else
        printf("la nombre saisie est null");

}

