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
#include "stdlib.h"
#include "colors.h"

int main() {
    int flag = 1;

    while (flag) {
        yellow();
        printf("Se tiraran 2 dados hasta que obtenga 3 pares\n");

        int count = 0;
        int dice1;
        int dice2;

        while(count != 3) {
            dice1 = (rand()%6)+1;
            dice2 = (rand()%6)+1;

            printf("Dado 1: %d\nDado 2: %d\n", dice1, dice2);

            if (dice1 == dice2) {
                printf("¡Obtuvo un par!\n");
                count++;
            }

            printf("\n");
        }

        printf("Felicidades! Obtuvo 3 pares\nValor de RAND_MAX %d\n", RAND_MAX);

        printf("¿Desea repetir? S/N\n");
        char repeat;
        scanf(" %c", &repeat);
        if (repeat != 's' && repeat != 'S') {
            flag = 0;
        }

        printf("\n");
    }

    return 0;
}