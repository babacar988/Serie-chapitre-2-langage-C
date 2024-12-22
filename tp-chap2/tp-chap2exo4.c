#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void main()
{
    int a,b;
    printf("Donner un nombre entier \n");
    scanf("%d %d", &a ,&b);
    if(a>0 && b>0 || a<0 && b<0 )
    puts("le produit est positif");
    else if (a==0 || b==0)
    puts("le produit est null");
    else
    puts("le produit est negatif");


}
