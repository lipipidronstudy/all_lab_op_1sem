#include <stdio.h>
#include "pands.h"

int main() {
    struct Rectangle new;

    printf(" Input x,y ver.A: ");
    scanf("%d %d", &new.coordA[0], &new.coordA[1]);
    printf("Input x,y ver.B: ");
    scanf("%d %d", &new.coordB[0], &new.coordB[1]);
    printf("Input x,y ver.C: ");
    scanf("%d %d", &new.coordC[0], &new.coordC[1]);
    printf("Input x,y ver.D: ");
    scanf("%d %d", &new.coordD[0], &new.coordD[1]);


    printf("%d\n", per(new));
    printf(" %d", plosh(new));


    return 0;
}




