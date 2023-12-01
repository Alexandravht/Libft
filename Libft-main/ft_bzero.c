#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
    char *s1;

    s1 = s;
   
    while(n != 0)
    {
        *s1 = 0;
		n--;
    }
}

/* MANUEL BZERO
    #include <strings.h>
    void bzero(void *s, size_t n);

	La fonction bzero() écrit n octets nuls dans la chaîne de caractères s. Si n est égal à zéro, bzero() ne fait rien.
*/

/* NB
SIZE_T est à privilégier car il permet de représenter les tailles d'objets en octets. Il ne peut jamais être négatif.
*/


//TEST BZERO

#include <stdio.h>
#include <string.h>
int main() {
    // Déclaration d'une chaîne de caractères pour le test
    char str[] = "Hello, World!";

    // Affichage de la chaîne avant l'appel à bzero
    printf("Avant bzero: %s\n", str);

    // Appel à la fonction bzero pour mettre à zéro les 5 premiers octets de la chaîne
    ft_bzero(str, 5);

    // Affichage des octets après l'appel à bzero
    printf("Après bzero: ");
    for (size_t i = 0; i < 12; i++) {
        printf("%d ", (unsigned char)str[i]);
    }
    printf("\n");

    // Affichage de la chaîne après l'appel à bzero avec le caractère nul représenté comme \0
    printf("Chaîne après bzero: %s\n", str);

    return 0;
}
