#include <stdio.h>

int main() {
    int mass[7] = {10,20,30,40,50,60,70};
    printf("Table of array(Nom/El):\n");
    for (int i = 0; i < 7; ++i){
        printf("%4d" ,i+1);
    }
    printf("\n");
       for (int i = 0; i< 7; ++i){
        printf("%4d",mass[i]);
    }

       int mass1[2][2] = {1,3,2,1};
    int mass2[2][2] = {1,0,1,2};
    int result[2][2];
    int proiz = 0;
    for (int j = 0; j < 2; ++j) {
        for (int i = 0; i < 2; ++i) {
            for (int q = 0; q < 2; ++q) {
                proiz +=mass1[q][i] * mass2[j][q];
            }
            result[j][i] = proiz;
            proiz = 0;
        }
    }
    for (int i = 0; i < 2; ++i){
        for (int q = 0; q < 2; ++q){
            printf("%d",result[q][i]);
            printf("%c",' ');
        }
        printf("%c\n",' ');
    }
    return 0;
}


