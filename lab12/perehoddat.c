#include <string.h>
#include "perehoddat.h"
int provmes (char s1, char s2, char s3){
    char month[3];
    month[0] = s1;
    month[1] = s2;
    month[2] = s3;

    if(strncmp(month,"Jan",3) == 0 || strncmp(month,"Mar",3) == 0 || strncmp(month,"May",3) == 0 || strncmp(month,"Jul",3) == 0 || strncmp(month,"Aug",3) == 0 || strncmp(month,"Oct",3) == 0 || strncmp(month,"Dec",3) == 0){
        return 31;
    } else if (strncmp(month,"Feb",3) == 0){
        return 28;
    } else {
        return 30;
    }

}
void nextmonth(char date[]){
    char month[3];
    month[0] = date[4];
    month[1] = date[5];
    month[2] = date[6];
    if (strncmp(month,"Jan",3) == 0){
        date[4] = 'F';
        date[5] = 'e';
        date[6] = 'b';
    } else if (strncmp(month,"Feb",3) == 0){
        date[4] = 'M';
        date[5] = 'a';
        date[6] = 'r';
    } else if (strncmp(month,"Mar",3) == 0){
        date[4] = 'A';
        date[5] = 'p';
    } else if (strncmp(month,"Apr",3) == 0){
        date[4] = 'M';
        date[5] = 'a';
        date[6] = 'y';
    } else if (strncmp(month,"May",3) == 0){
        date[4] = 'J';
        date[5] = 'u';
        date[6] = 'n';
    } else if (strncmp(month,"Jun",3) == 0){
        date[6] = 'l';
    } else if (strncmp(month,"Jul",3) == 0){
        date[4] = 'A';
        date[5] = 'u';
        date[6] = 'g';
    } else if (strncmp(month,"Aug",3) == 0){
        date[4] = 'S';
        date[5] = 'e';
        date[6] = 'p';
    } else if (strncmp(month,"Sep",3) == 0){
        date[4] = 'O';
        date[5] = 'c';
        date[6] = 't';
    } else if (strncmp(month,"Oct",3) == 0){
        date[4] = 'N';
        date[5] = 'o';
        date[6] = 'v';
    } else if (strncmp(month,"Nov",3) == 0){
        date[4] = 'D';
        date[5] = 'e';
        date[6] = 'c';
    } else {
        date[4] = 'J';
        date[5] = 'a';
        date[6] = 'n';
    }
}
void dweek(char date[]){

    if (strncmp(date,"Mon",3) == 0){
        date[0] = 'T';
        date[1] = 'u';
        date[2] = 'e';
    } else if (strncmp(date,"Tue",3) == 0){
        date[0] = 'W';
        date[1] = 'e';
        date[2] = 'n';
    } else if (strncmp(date,"Wed",3) == 0){
        date[0] = 'T';
        date[1] = 'h';
        date[2] = 'u';
    } else if (strncmp(date,"Thu",3) == 0){
        date[0] = 'F';
        date[1] = 'r';
        date[2] = 'i';
    } else if (strncmp(date,"Fri",3) == 0){
        date[0] = 'S';
        date[1] = 'a';
        date[2] = 't';
    } else if (strncmp(date,"Sat",3) == 0){
        date[1] = 'u';
        date[2] = 'n';
    } else {
        date[0] = 'M';
        date[1] = 'o';
    }

}