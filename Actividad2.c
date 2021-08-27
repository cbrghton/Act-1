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

char *resultado(int flag) {
    if (flag) {
        return "1-Verdadero";
    } else {
        return "0-Falso";
    }
}

int ejercicio1() {
    int x;
    printf("Ingrese el valor de x:\n");
    scanf("%d", &x);

    int y;
    printf("Ingrese el valor de y:\n");
    scanf("%d", &y);

    float a;
    printf("Ingrese el valor de a:\n");
    scanf("%f", &a);

    float b;
    printf("Ingrese el valor de b:\n");
    scanf("%f", &b);

    printf("La suma de %d + %d es igual a %d\n", x, y, x+y);

    printf("La resta de %d - %d es igual a %d\n", x, y, x-y);

    printf("La multiplicación de %d * %f es igual a %f\n", x, a, x*a);

    printf("La división de %f entre %f y esto multiplicado por 4 es igual a %f\n", b, a, (b/a)*4);

    printf("La suma del doble de %d más el triple de %f es igual a %f\n", y, a, (2*y)+(3*a));

    printf("El modulo de %d entre %d y le sume %f por %d es igual a %f\n", y, x, a, y, (y%x)+(a*y));

    printf("\n");

    return 0;
}

int ejercicio2() {
    int x;
    printf("Ingrese el primer número:\n");
    scanf("%d", &x);

    int y;
    printf("Ingrese el segundo número:\n");
    scanf("%d", &y);

    printf("Igualdad: %d\n", x == y);
    printf("Desigualdad: %d\n", x != y);
    printf("El primero es mayor: %d\n", x > y);
    printf("El primero es mayor o igual: %d\n", x >= y);
    printf("El primero es menor: %d\n", x < y);
    printf("El primero es menor o igual: %d\n", x <= y);

    printf("\n");

    return 0;
}

int ejercicio3() {
    int x = 2;
    int y = 6;
    int z = 9;
    int r = 100;
    int s = 10;
    int a = 15;
    int b = 3;

    printf("a) x += 10 => %d\n", x += 10);

    printf("b) s *= b => %d\n", s *= b);

    printf("c) r /= 0 => error\n");

    printf("d) y += x + 10 => %d\n", y += x + 10);

    printf("e) z -= a*b => %d\n", z -= a*b);

    printf("\n");

    return 0;
}

int ejercicio4() {
    int r = 100;
    int x = 2;
    int y = 6;
    int z = 9;

    int first = 10 + x - y;
    printf("a) x = 10 + x - y equivale a: \n");

    printf("1) x += 10 - y");
    int option = x += 10 - y;
    if (first == option) {
        printf("  <- Este es correcto");
    }

    printf("\n");

    x = 2;

    option = x -= y + 10;
    printf("2) x -= y + 10");
    if (first == option) {
        printf("  <- Este es correcto");
    }

    printf("\n");

    x = 2;

    option = x += 10 + y;
    printf("3) x += 10 + y");

    if (first == option) {
        printf("  <- Este es correcto");
    }

    printf("\n\n");

    x = 2;


    //////////////////////////////////////////////////////////

    printf("b) r = 100 * r es equivalente a:\n");

    int second = 100*r;

    option = r *= 100*r;
    printf("1) r *= 100 * r");
    if (second == option) {
        printf("  <- Este es correcto");
    }

    printf("\n");

    r = 100;

    option = r *= 100;
    printf("2) r *= 100");
    if (second == option) {
        printf("  <- Este es correcto");
    }

    printf("\n");

    r = 100;

    option = r += 100;
    printf("3) r += 100");
    if (second == option) {
        printf("  <- Este es correcto");
    }

    printf("\n\n");

    r = 100;


    ////////////////////////////////////////////////////

    printf("c) y = y / (10 + x) es equivalente a:\n");

    int third = y / (10 + x);

    option = y /= 10*x;
    printf("1) y /= 10 * x");
    if (third == option) {
        printf("  <- Este es correcto");
    }

    printf("\n");

    y = 6;

    option = y /= 10 + y / x;
    printf("2) y /= 10 + y / x");
    if (third == option) {
        printf("  <- Este es correcto");
    }

    printf("\n");

    y = 6;

    option = y /= 10 + x;
    printf("3) y /= 10 + x");
    if (third == option) {
        printf("  <- Este es correcto");
    }

    printf("\n\n");

    y = 6;


    //////////////////////////////////////////////

    printf("d) z = 3 * x + 6 es equivalente a:\n");

    int fourth = 3 * x + 6;
    int fourth_flag = 0;

    option = z *= x + 6;
    printf("1) z *= x + 6");
    if (fourth == option) {
        fourth_flag = 1;
        printf("  <- Este es correcto");
    }

    printf("\n");

    z = 9;

    option = z *= 3 + 6;
    printf("2) z *= 3 + 6");
    if (fourth == option) {
        fourth_flag = 1;
        printf("  <- Este es correcto");
    }

    printf("\n");

    z = 9;

    printf("3) No es posible");

    if (!fourth_flag) {
        printf("  <- Este es correcto");
    }

    printf("\n\n");

    return 0;
}

int ejercicio5() {
    int x = 10;
    int y = 20;
    int z = 30;

    printf("x = 10\ny = 20\nz = 30\n");

    printf("a) z = x - y  &  t = z - y\n");

    z = x - y;
    int t = z - y;
    printf("z = %d  &  t = %d\n\n", z, t);

    z = 30;

    printf("b) (x < 10) && (y > 15)\n%d\n\n", ((x<10) && (y>15)));

    printf("c) (x <= z) || (z <= y)\n%d\n\n", ((x <= z) || (z <= y)));

    printf("d) !(x + y < z)\n%d\n\n", (!((x+y) < z)));

    printf("e) (x + y != z) && (1/(z-x-y) != 1)\n%d\n\n", ((x+y != z) && ((1/(z-x-y)) != 1)));

    return 0;
}

int ejercicio6() {
    int op1 = 10;
    int op2 = 20;
    int op3 = 30;

    printf("a) op1 > op2\n%s\n\n", resultado(op1 > op2));

    printf("b) (op3 - op1) <= op2\n%s\n\n", resultado((op3-op1) <= op2));

    printf("c) (op1 + op2) == op3\n%s\n\n", resultado((op1+op2) == op3));

    printf("d) op1 + op2 != op3\n%s\n\n", resultado((op1+op2) != op3));

    printf("e) !((op1 + op2) <= op3)\n%s\n\n", resultado(!((op1+op2) <= op3)));

    printf("f) (op2 * 22) > (op3 * 19)\n%s\n\n", resultado((op2*22) > (op3*19)));

    char* g1 = resultado(op3 <= op2);
    char* g2 = resultado((op3 - op2 == op1) && (op1 <= op3));
    char* g3 = resultado((op2 - op1 != op1) || !(op3 < (op2 + op2)));
    printf("g) op3 <= op2\n%s\n\n(op3 - op2 == op1) && (op1 <= op3)\n%s\n\n(op2 - op1 != op1) || !(op3 < (op2 + op2))\n%s\n\n", g1, g2, g3);

    return 0;
}

int main() {
    int flag = 1;
    int option;

    while (flag == 1) {
        printf("Seleccione el ejercicio\n1) Ejercicio 1\n2) Ejercicio 2\n3) Ejercicio 3\n4) Ejercicio 4\n5) Ejercicio 5\n6) Ejercicio 6\nCualquier otra opción termina el programa\n");

        scanf("%d", &option);

        printf("\n");

        switch (option) {
            case 1:
                ejercicio1();
                break;
            case 2:
                ejercicio2();
                break;
            case 3:
                ejercicio3();
                break;
            case 4:
                ejercicio4();
                break;
            case 5:
                ejercicio5();
                break;
            case 6:
                ejercicio6();
                break;
            default:
                flag = 0;
        }
    }

    return 0;
}