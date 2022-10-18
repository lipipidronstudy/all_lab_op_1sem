#include <stdio.h>
int max(int chis1, int chis2){
    if (chis1-chis2 < 0) {
        return(chis2);
    } else {
        return(chis1);
    }
}
int min(int chis1, int chis2){
    if (chis1-chis2 < 0) {
        return(chis1);
    } else {
        return(chis2);
    }
}
int NOD (int chis1, int chis2){
    int maxc = max(chis1,chis2);
    int minc = min(chis1,chis2);
    int del1 = maxc % minc;
    if (del1 ==0) {
        return minc;
    }
    int del2 = minc % del1;
    if (del2 ==0){
        return del1;
    }
        while (min(del1, del2) != 0 || del1 % del2 != 0) {
            if (del2 != 0) {
                del1 = del1 % del2;
            }
            if (del1 != 0) {
                del2 = del2 % del1;
            }
        }
    if (del2 ==0) {
        return (del1);
    } else {
        return (del2);
    }
}
int NOK (int chis1, int chis2){
    int del = NOD(chis1,chis2);
    int proiz = chis1*chis2;
    return (proiz/del);
}
int main() {
    int chis1;
    int chis2;
    scanf("%d",&chis1);
    scanf("%d",&chis2);
    printf("%d, %d",NOD(chis1,chis2),NOK(chis1,chis2));
    return 0;
}




