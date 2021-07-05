#include <stdio.h>
#include <string.h>

/* Elaborar una aplicación de línea de comandos en C que permita al usuario 
adivinar una palabra secreta.  El usuario tiene un máximo de 3 intentos para lograrlo. 
Los intentos ejecutados por el usuario deben aparecer en pantalla. */

int main() {
    char s[] = "logica";
    char palabra_secreta[50];
    int i;

    for(i=2; i>=0; i--) {
        printf("Adivina la palabra secreta: \n");
        scanf("%s", &palabra_secreta);

        if(strcmp(s, palabra_secreta) == 0) {
            printf("Correcto.\n");
            break;
        }
        else {
            printf("%s es incorrecto. Te quedan %d intentos\n\n", palabra_secreta, i);
        }
    }

    return 0;
}