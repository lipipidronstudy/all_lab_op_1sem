#include <stdio.h>
#include <math.h>
struct otr{
 int VerAx;
 int VerAy;
 int VerBx;
 int VerBy;
 int dlin;
};
int dlina(struct otr poluch){
    poluch.dlin = sqrt(pow(poluch.VerAx - poluch.VerBx,2) + pow(poluch.VerAy - poluch.VerBy,2));
    return poluch.dlin;
}
int main() {
    struct otr for_test;
    for_test.VerAx = 0;
    for_test.VerAy = 0;
    for_test.VerBx = 5;
    for_test.VerBy = 7;
        printf("Coordinates A(%d %d), B(%d %d) \n",for_test.VerAx,for_test.VerAy,for_test.VerBx,for_test.VerBy);
        for_test.dlin = dlina(for_test);
        printf("%d",for_test.dlin);

return 0;
}
