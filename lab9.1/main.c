#include <stdio.h>
#include <stdlib.h>

int main() {
    int dlin;
    printf("Vvedite dlinu stroki \n");
    scanf("%d",&dlin);
    char *stroka;
    stroka = malloc(dlin*(sizeof(char)));
    scanf("%s",stroka);
    int kolcif = 0;
    int kolsimb = 0;
    int kolsimm = 0;


    for (int i = 0; i < dlin; ++i){
        if ((int)stroka[i] >=97 && (int)stroka[i] <=122 ){
            ++kolsimm;
        } else if((int)stroka[i] >=65 && (int)stroka[i] <=90){
            ++kolsimb;
        } else if((int)stroka[i] >=48 && (int)stroka[i] <=57){
            ++kolcif;
        }
    }
    printf("Kolcif %d \n",kolcif);
    printf("Kol big sim %d \n",kolsimb);
    printf("Kol small sim %d \n",kolsimm);





    free(stroka);
    return 0;
}
