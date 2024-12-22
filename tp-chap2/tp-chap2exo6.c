#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void main()
{
    int a,b,c,max,moy,min;
    printf("Donner un nombre entier \n");
    scanf("%d %d %d", &a,&b,&c);
    if(a<b)
        {
        max=b;
        min=a;
        }
    else
    {

        max=a;
        min=b;
    }

    if(c>max)
    {
        moy=max;
        max=c;
    }

    else
    {
        if(c>min)
        moy=c;
        else
        {
            moy=min;
            min=c;
        }
    }
    printf("les valeurs dans l'ordre sont %d %d %d",min,moy,max);
}
