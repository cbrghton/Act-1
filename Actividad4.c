// ██████╗ █████╗ ██████╗ ██╗      ██████╗ ███████╗
//██╔════╝██╔══██╗██╔══██╗██║     ██╔═══██╗██╔════╝
//██║     ███████║██████╔╝██║     ██║   ██║███████╗
//██║     ██╔══██║██╔══██╗██║     ██║   ██║╚════██║
//╚██████╗██║  ██║██║  ██║███████╗╚██████╔╝███████║
// ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚══════╝
//██████╗ ██████╗ ██╗ ██████╗ ██╗  ██╗████████╗ ██████╗ ███╗   ██╗
//██╔══██╗██╔══██╗██║██╔════╝ ██║  ██║╚══██╔══╝██╔═══██╗████╗  ██║
//██████╔╝██████╔╝██║██║  ███╗███████║   ██║   ██║   ██║██╔██╗ ██║
//██╔══██╗██╔══██╗██║██║   ██║██╔══██║   ██║   ██║   ██║██║╚██╗██║
//██████╔╝██║  ██║██║╚██████╔╝██║  ██║   ██║   ╚██████╔╝██║ ╚████║
//╚═════╝ ╚═╝  ╚═╝╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚═╝  ╚═══╝

#include <stdio.h>
#include "colors.h"

int main() {
    int flag = 1;

    while (flag == 1) {
        int number;
        yellow();
        printf("Ingrese un número de su elección\nEl programa le informara si es par o impar y si este es múltiplo de 3, 5, 7 o 9\nPosteriormente se elevará al cuadrado el número y se evaluara de nuevo\n");
        scanf("%d", &number);

        if (number%2 != 0) {
            green();
            printf("El número es impar\n");
        } else {
            green();
            printf("El número es par\n");
        }

        if (number%3 == 0) {
            cyan();
            printf("El número es múltiplo 3\n");
        }

        if (number%5 == 0) {
            cyan();
            printf("El número es múltiplo de 5\n");
        }

        if (number%7 == 0) {
            cyan();
            printf("El número es múltiplo de 7\n");
        }

        if (number%9 == 0) {
            cyan();
            printf("El número es múltiplo de 9\n");
        }

        number = number*number;

        yellow();
        printf("El resultado de elevar el número al cuadrado es: %d\n", number);

        if (number%2 != 0) {
            green();
            printf("El número es impar\n");
        } else {
            green();
            printf("El número es par\n");
        }

        if (number%3 == 0) {
            cyan();
            printf("El número es múltiplo 3\n");
        }

        if (number%5 == 0) {
            cyan();
            printf("El número es múltiplo de 5\n");
        }

        if (number%7 == 0) {
            cyan();
            printf("El número es múltiplo de 7\n");
        }

        if (number%9 == 0) {
            cyan();
            printf("El número es múltiplo de 9\n");
        }

        yellow();
        char response;
        printf("¿Quiere correr de nuevo el programa?\nS/N\n");
        scanf(" %c", &response);
        if (response != 'S' && response != 's') {
            flag = 0;
        }
        printf("\n");
    }

    return 0;
}
