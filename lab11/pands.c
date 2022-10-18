#include "pands.h"
#include <math.h>
int per(struct Rectangle isk){
    int s1 = sqrt(pow(isk.coordA[0] - isk.coordB[0],2) + pow(isk.coordA[1] - isk.coordB[1],2));
    int s2 = sqrt(pow(isk.coordA[0] - isk.coordD[0],2) + pow(isk.coordA[1] - isk.coordD[1],2));
    int perim = 2 * (s1 + s2);
    return perim;

}
int plosh(struct Rectangle isk){
    int s1 = sqrt(pow(isk.coordA[0] - isk.coordB[0],2) + pow(isk.coordA[1] - isk.coordB[1],2));
    int s2 = sqrt(pow(isk.coordA[0] - isk.coordD[0],2) + pow(isk.coordA[1] - isk.coordD[1],2));
    int ploshad = s1 * s2;
    return ploshad;
}
