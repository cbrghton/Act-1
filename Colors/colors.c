//
// Created by xxb on 27/08/21.
//

#include "colors.h"
#include <stdio.h>

void white(void) {
    printf("\033[0;37m");
}

void black(void) {
    printf("\033[0;30m");
}

void red(void) {
    printf("\033[0;31m");
}

void green(void) {
    printf("\033[0;32m");
}

void yellow (void) {
    printf("\033[0;33m");
}
void blue (void) {
    printf("\033[0;34m");
}
void purple (void) {
    printf("\033[0;35m");
}
void cyan (void) {
    printf("\033[0;36m");
}

void reset(void) {
    printf("\033[0m");
}
