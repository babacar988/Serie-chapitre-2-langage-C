#include<stdio.h>


int main(void)
{
    char c;
    printf("Veuillez saisir un caractere\n");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
            {
            printf("le caractere est minuscule");

            }
            else if (c >= 'A' && c <= 'Z')
            {
            printf("le caractere est majuscule ");

            }
            else if(c >= '0' && c <= '9')

            {
                printf(" le caracter est un chiffre ");
            }


            else
            {
            printf("le caracter saisi est special");
        }


}
