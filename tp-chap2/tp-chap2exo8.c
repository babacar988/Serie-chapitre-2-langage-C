#include<stdio.h>
#include<math.h>

 int main(void)
 {
    float a, b, c, delta, racine1, racine2;
    printf("Entrez a, b et c (ax^2+bx+c) : ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b- 4 * a * c;

    if (delta == 0.0)
    {
        racine1 =-b / (2 * a);
        printf("Ce polynôme possède une unique racine x = %f\n", racine1);
    }

    if (delta > 0.0)
    {

    racine1 = (-b- sqrt(delta)) / (2 * a);
    racine2 = (-b + sqrt(delta)) / (2 * a);
    printf("Ce polynôme possède deux racines x1 = %f et x2 = %f\n",racine1, racine2);
    }

    if (delta < 0.0)
        printf("Ce polynôme ne possède pas de racine réelle\n");
    return 0;

 }
