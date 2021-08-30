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
    int labyrinth[9][11] = {{1,1,1,1,1,1,1,1,1,1,1},
                            {1,2,0,0,0,0,0,0,0,0,1},
                            {1,0,1,1,1,1,1,1,1,0,1},
                            {1,0,1,0,0,0,0,0,1,0,1},
                            {1,0,1,0,1,1,1,0,1,0,1},
                            {1,0,1,0,1,0,1,0,1,0,1},
                            {1,0,1,0,1,0,1,0,1,0,1},
                            {1,0,1,0,0,0,1,0,0,0,1},
                            {1,1,1,1,1,1,1,1,1,1,1}};

    while(flag) {
        yellow();
        // Modifique las instrucciones para que se pueda mover hacia arriba, abajo, izquierda y derecha
        printf("Usted personificará a un ratón que se encuentra en un laberinto\nPodrá hacia arriba, abajo, izquierda y derecha para poder llegar a su queso\nLas paredes están electrificadas, por lo que si las toca el juego termina");

        int mouse_life = 1;
        int mouse_position_x = 5;
        int mouse_position_y = 5;

        while(mouse_life) {
            yellow();
            printf("¿Hacia donde quiere moverse?\nIzquierda: L\nArriba: U\nAbajo: D\nDerecha: R\n");
            char move;
            scanf(" %c", &move);

            switch (move) {
                case 'L':
                case 'l':
                    mouse_position_x--;
                    break;
                case 'U':
                case 'u':
                    mouse_position_y--;
                    break;
                case 'D':
                case 'd':
                    mouse_position_y++;
                    break;
                case 'R':
                case 'r':
                    mouse_position_x++;
                    break;
                default:
                    red();
                    printf("Valor invalido, trate de nuevo\n");
            }

            int position = labyrinth[mouse_position_y][mouse_position_x];

            if (position == 1) {
                red();
                printf("Juego terminado\nToco una pared\n");
                mouse_life = 0;
            } else if (position == 2) {
                green();
                printf("¡Ha encontrado su queso!\n¡Felicidades!\n");
                mouse_life = 0;
            }
        }

        char response;
        yellow();
        printf("¿Desea repetir el programa?\nS/N\n");
        scanf(" %c", &response);
        if (response != 'S' && response != 's') {
            flag = 0;
        }
        printf("\n");
    }

    return 0;
}
