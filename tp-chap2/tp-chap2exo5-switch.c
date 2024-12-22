#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{

    int n;
    printf("Donner un entier\n");
    scanf("%d", &n);


    switch (n)
    {

        case 0 : printf("NULL");
                break;
        case 1 : printf("PETIT");
                break;
        case 2 : printf("PETIT");
                break;
        case 3 : printf("MOYEN");
                break;
        case 4 : printf("GRAND");
                break;
        case 5 : printf("GRAND");
                break;


        default :  printf("HORS NORME\n");

    }
return 0;


}
