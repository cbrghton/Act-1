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

#include <ncurses.h>

int ejercicio1 () {
    printw("\nEjercicio 1:\nIngrese una letra y le diremos si es una vocal o consonante\n");
    refresh();
    noecho();

    int letter = getch();

    attron(COLOR_PAIR(3));
    switch (letter) {
        case 97:
        case 65:
            printw("\nabeja\n");
            break;

        case 101:
        case 69:
            printw("\nestado\n");
            break;

        case 105:
        case 73:
            printw("\niglú\n");
            break;

        case 111:
        case 79:
            printw("\noso\n");
            break;

        case 117:
        case 85:
            printw("\nultramarino\n");
            break;

        default:
            attron(COLOR_PAIR(4));
            printw("\nNo es una vocal\n");
            break;
    }

    return 0;
}

int ejercicio2 () {
    attron(COLOR_PAIR(1));
    printw("\nEjercicio 2:\nEscriba el promedio del alumno y le diremos en que nivel de la escala está\n");
    refresh();

    int average;

    scanw("%d", &average);

    switch (average) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            attron(COLOR_PAIR(2));
            printw("\nReprobado\n");
            break;

        case 6:
            attron(COLOR_PAIR(1));
            printw("\nSuficiente\n");
            break;

        case 7:
            attron(COLOR_PAIR(1));
            printw("\nMejorable\n");
            break;

        case 8:
            attron(COLOR_PAIR(3));
            printw("\nBien\n");
            break;

        case 9:
            attron(COLOR_PAIR(3));
            printw("\nExtraordinario\n");
            break;

        case 10:
            attron(COLOR_PAIR(3));
            printw("\nSobresaliente\n");
            break;

        default:
            attron(COLOR_PAIR(2));
            printw("\nEl dato es erroneo\n");
            break;
    }

    return 0;
}

int main() {
    int flag = 1;

    while(flag) {
        initscr();
        refresh();

        if (!has_colors()) {
            printw("La terminal no soporta los colores");
            getch();
        } else {
            start_color();
        }

        init_pair(1, COLOR_YELLOW, COLOR_BLACK);
        init_pair(2, COLOR_RED, COLOR_BLACK);
        init_pair(3, COLOR_GREEN, COLOR_BLACK);
        init_pair(4, COLOR_MAGENTA, COLOR_BLACK);

        attron(COLOR_PAIR(1));
        printw("\nBienvenido, elija un ejercicio:\n1) Ejercicio 1\n2) Ejercicio 2\n");
        echo();
        int choice = getch();

        switch (choice) {
            case 49:
                ejercicio1();
                break;
            case 50:
                ejercicio2();
                break;
            default:
                attron(COLOR_PAIR(2));
                printw("\nNo se eligio una opción correcta\n");
                break;
        }


        attron(COLOR_PAIR(1));
        printw("\nDesea repetir? S/N\n");
        int repeat = getch();
        if (repeat != 115 && repeat != 83) {
            flag = 0;
        }
        endwin();
    }
    return 0;
}
