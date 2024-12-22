#include<stdio.h>
#include<math.h>

int main(void)
{
    char c;
    printf("Veuillez saisir une lettre alphabetique\n");
    scanf("%c", &c);
    if ((c >= 'a') && (c <= 'z'))
        {
            c = (c - 'a' + 'A');
            printf("le caractere en majuscule est %c :",c);
        }
        else
        {
            c = (c - 'A' + 'a');
            printf("le caractere en minuscule est %c :",c);
        }

 }
