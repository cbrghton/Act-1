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

    while(flag) {
        yellow();
        printf("Ingrese un número para calcular su factorial\n");

        int number;
        scanf("%d", &number);

        long factor = 1;

        for (int i = number; i > 0; --i) {
            factor *= i;
        }

        green();
        printf("El factorial de %d es %ld\n", number, factor);

        yellow();
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
