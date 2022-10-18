#include <stdio.h>
#include <time.h>
#include <string.h>
#include "perehoddat.h"
int main() {
    char mass[10][10];
    time_t timer = time(NULL);
    char date[11];
    strncpy(date,ctime(&timer),11);
    for(int i = 0; i < 10; ++i){
        mass[0][i] = date[i];
    }
    int today;
    int kolday;
    for (int j = 1; j < 10; ++j){
        kolday = provmes(date[4],date[5],date[6]);
        if (today + 1 > kolday) {
            nextmonth(date);
            date[8] = 1 + '0';
            date[9] = ' ';
        } else {
            if (date[9] != ' ') {
                today = (date[8] - '0') * 10 + (date[9] - '0') + 1;
                date[8] = today / 10 + '0';
                date[9] = today % 10 + '0';
            } else {
                today = date[8] - '0' + 1;
                date[8] = today + '0';
            }
        }
        dweek(date);
        for(int i = 0; i < 10; ++i){
            mass[j][i] = date[i];
        }
    }


    FILE *test;
    char name[20];
    printf("Input file's name:");
    gets(name);
    strcat(name,".txt");
    test = fopen(name, "a+b");
    for(int i = 0; i< 10; ++i){
        for(int j = 0; j<10; ++j){
            fputc(mass[i][j],test);
        }

        fputc('\n',test);

    }
    fclose(test);

    return 0;
}
