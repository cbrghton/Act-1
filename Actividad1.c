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

#define PI 3.141592

enum acceleration {EARTH = 10};

int main() {

    const double euler = 10.10110;


    int number;
    long longNumber;
    float floatNumber;
    double doubleNumber;
    char string[10];
    char character;

    printf("Bienvenido, se le pedirán 6 datos\nIngrese un número entero\n");
    scanf("%d", &number);

    printf("Ingrese un número entero largo\n");
    scanf("%ld", &longNumber);

    printf("Ingrese un número con punto decimal\n");
    scanf("%f", &floatNumber);

    printf("Ingrese un número con número con punto decimal de precisión doble\n");
    scanf("%lf", &doubleNumber);

    printf("Ingrese una cadena de texto de maximo 10 caracteres\n");
    scanf("%10s", string);

    printf("Ingrese un carácter\n");
    scanf(" %c", &character);

    printf("Los datos que ingresó son:\nNúmero: %d\nNúmero Largo: %ld\nNúmero con punto decimal: %f\nNúmero con punto decimal preciso: %lf\nCadena de texto: %s\nCarácter: %c\n", number, longNumber, floatNumber, doubleNumber, string, character);

    printf("La constantes son:\nPi: %lf\nEuler: %lf\nAceleración de la Gravedad en la Tierra: %d", PI, euler, EARTH);

    return 0;
}
