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

    while(flag) {
        int day[24];

        for (int i = 0; i < 24; ++i) {
            if (i >= 6 && i <= 9) {
                day[i] = rand()%(2000 + 1 - 300) + 300;
            }

            if (i >= 10 && i <= 17) {
                day[i] = rand()%(250 + 1 - 30) + 30;
            }

            if (i >= 18 && i <= 21) {
                day[i] = rand()%(3200 + 1 - 1200) + 1200;
            }

            if (i >= 22 || i <= 5) {
                day[i] = rand()%(500 + 1 - 20) + 20;
            }
        }

        yellow();
        printf("Se mostrarán el número de autos que han circulado sobre Av Politécnico durante 24h\n");

        cyan();

        int general_average = 0, average1 = 0, count1 = 0, average2 = 0, count2 = 0, average3 = 0, count3 = 0, average4 = 0, count4 = 0, hour_max_vehicules = 0, max_vehicules = 0, hour_min_vehicules = 0, min_vehicules = 3201;

        for (int i = 0; i < 24; ++i) {
            printf("Hora: %d:00 -> Autos que circularon: %d\n", i, day[i]);

            if (i >= 6 && i <= 9) {
                average1 = average1 + day[i];
                count1++;
            }

            if (i >= 10 && i <= 17) {
                average2 = average2 + day[i];
                count2++;
            }

            if (i >= 18 && i <= 21) {
                average3 = average3 + day[i];
                count3++;
            }

            if (i >= 22 || i <= 5) {
                average4 = average4 + day[i];
                count4++;
            }

            general_average = general_average + day[i];

            if (day[i] > max_vehicules) {
                max_vehicules = day[i];
                hour_max_vehicules = i;
            }

            if (day[i] < min_vehicules) {
                min_vehicules = day[i];
                hour_min_vehicules = i;
            }
        }

        average1 = average1/count1;
        average2 = average2/count2;
        average3 = average3/count3;
        average4 = average4/count4;
        general_average = general_average/24;

        green();
        printf("El promedio de vehículos en el bloque de las 06:00 a las 09:00 fue de %d\n", average1);
        printf("El promedio de vehículos en el bloque de las 10:00 a las 17:00 fue de %d\n", average2);
        printf("El promedio de vehículos en el bloque de las 18:00 a las 21:00 fue de %d\n", average3);
        printf("El promedio de vehículos en el bloque de las 22:00 a las 05:00 fue de %d\n", average4);
        printf("El promedio de vehículos durante el dia fue de %d\n", general_average);
        printf("A las %d:00 horas hubo la mayor afluencia de autos que fue de %d vehículos y a las %d:00 horas hubo la menor afluencia que fue de %d vehículos\n", hour_max_vehicules, max_vehicules, hour_min_vehicules, min_vehicules);

        yellow();
        printf("Desea repetir? S/N\n");
        char repeat;
        scanf(" %c", &repeat);

        if (repeat != 's' && repeat != 'S') {
            flag = 0;
        }

        printf("\n");
    }

    return 0;
}
