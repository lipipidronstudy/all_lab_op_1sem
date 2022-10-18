#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bubblesort(char mass[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (mass[i] > mass[j]) {
                char a = mass[i];
                mass[i] = mass[j];
                mass[j] = a;
            }
        }
    }
}

int prov(char sim, char mass2[], int n2) {
    int flag = 0;
    for (int j = 0; j < n2; ++j) {
        if (sim == mass2[j]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        return 1;
    } else {
        return 0;
    }

}

int main() {
    int n1;
    int n2;

    scanf("%d", &n1);
    char *str1;
    str1 = (char*)malloc((n1 * sizeof(char)));
    scanf("%d", &n2);
    char *str2;
    str2 = (char*)malloc((n2 * sizeof(char)));
    scanf("%s", str1);
    scanf("%s", str2);





    //2
    printf("Zadanie 2\n");
    int n;
    scanf("%d", &n);
    strncat(str1, str2, n);
    printf("%s\n", str1);


    //4
    printf("Zadanie 4\n");
    scanf("%d", &n);
    int result = memcmp(str1, str2, n);
    if (result == 0) {
        printf("First %d symbols equal\n", n);
    } else {
        printf("First %d symbols not equal\n", n);
    }



    //6

    printf("Zadanie 6\n");
    scanf("%d", &n);
    char *strcopy;
    strcopy = (char*)malloc(n1 * (sizeof(char)));
    strcpy(strcopy, str1);
    strncpy(strcopy, str2, n);

    printf("%s\n", strcopy);
    free(strcopy);




    //11
    printf("Zadanie 11\n");
    int count = 1;
    char *massel;
    massel = (char*)malloc(n2 * (sizeof(char)));
    strcpy(massel, str2);
    bubblesort(massel, n2);
    char *str2sort;
    str2sort = (char*)malloc(n2 * sizeof(char));
    str2sort[0] = massel[0];
    for (int i = 1; i < n2; ++i) {
        if (massel[i] != massel[i - 1]) {
            str2sort[count] = massel[i];
            count += 1;
        }
    }
    int proverk = 0;
    int maxdl = 0;
    int dl = 0;
    for (int i = 0; i < n1; ++i) {
        proverk = (str1[i], str2sort, count);
        if (proverk != 0) {
            ++dl;
        } else {
            if (dl > maxdl) {
                maxdl = dl;
                dl = 0;
            }
        }
    }
    if (dl > maxdl) {
        maxdl = dl;
    }
    printf("%d\n", maxdl);
    free(massel);


//13
    printf("Zadanie 13\n");
    proverk = 0;
    int nomsim = 0;
    char *kus;
    kus = (char*)malloc(n1 * sizeof(char));
    int flag = 0;
    for (int i = 0; i < n1; ++i) {
        proverk = prov(str1[i], str2sort, count);
        if (proverk != 0) {
            if (flag == 1) {
                for (int j = 0; j < nomsim; ++j) {
                    printf("%c", kus[j]);

                }
                printf("\n");
                nomsim = 0;
            }
            flag = 1;
        } else {
            if (flag == 1) {
                kus[nomsim] = str1[i];
                nomsim += 1;
            }
        }
    }
    free(str2sort);
    free(kus);
    free(str1);
    free(str2);

    return 0;

}
