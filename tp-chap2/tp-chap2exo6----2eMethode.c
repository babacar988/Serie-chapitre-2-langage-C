#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Saisir la 1ere valeur:");
    scanf("%d",&x);
    printf("Saisir la 2eme valeur:");
    scanf("%d",&y);
    printf("Saisir la 3eme valeur:");
    scanf("%d",&z);
    if((x>y) && (x>z) && (y>z))
        {
            printf(" la valeur max est %d\nla valeur moy est %d\nla valeur min est %d\n",x,y,z);
        }
    if ((x>y) && (x>z) && (z>y))
        {
            printf("la valeur max est %d\nla valeur moy est %d\nla valeur min est %d\n",x,z,y);
        }
    if ((y>x) && (y>z) && (x>z))
        {
            printf("la valeur max est %d\nla valeur moy est %d\nla valeur min est %d\n",y,x,z);
        }
    if((y>x) && (y>z) && (z>x))
        {
            printf("la valeur max est %d\nla valeur moy est %d\nla valeur min est %d\n",y,z,x);
        }
    if((z>y) && (z>x) && (x>y))
        {
            printf("la valeur max est %d\nla valeur moy est %d\nla valeur min est %d\n",z,x,y);
        }
    if ((z>y) && (z>x) && (y>x))
        {
            printf("la valeur max est %d\nla valeur moy est %d\nla valeur min est %d\n",z,y,x);
        }
    return(0);
}
