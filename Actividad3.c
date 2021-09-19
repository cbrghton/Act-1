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

int main()
{
    int flag = 1;

    while(flag == 1) {
        yellow();

        int age;
        printf("Recomendador de peliculas\nIngrese su edad:\n");
        scanf("%d", &age);

        if (age >= 0 && age <= 3) {
            green();
            printf("Le recomendamos: Toy Story\n");
        } else if (age >= 4 && age <= 6) {
            yellow();
            char gender;
            printf("\n¿El espectador es niña o niño?\nIngrese M para niña y H para niño\n");
            scanf(" %c", &gender);
            green();
            if (gender == 'M') {
                printf("Le recomendamos: La Sirenita\n");
            } else if(gender == 'H') {
                printf("Le recomendamos: Iron Man\n");
            } else {
                red();
                printf("Valor incorrecto!\n");
            }
        } else if (age >= 7 && age <= 12) {
            green();
            printf("Le recomendamos: High School Musical\n");
        } else if (age >= 13 && age <= 16) {
            green();
            printf("Le recomendamos: Capitan America Civil War\n");
        } else if (age >= 17 && age <= 28) {
            green();
            printf("Le recomendamos: Divergente\n");
        } else if (age >= 29 && age <= 45) {
            green();
            printf("Le recomendamos: Star Wars IV\n");
        } else if (age > 45) {
            green();
            printf("Le recomendamos: El Padrino\n");
        } else {
            red();
            printf("Valor incorrecto\n");
        }

        yellow();
        char response;
        printf("Desea repetir?\nS/N\n");
        scanf(" %c", &response);
        if (response != 'S') {
            flag = 0;
        }
    }

    return 0;
}
