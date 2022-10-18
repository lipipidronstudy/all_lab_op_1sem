#include <stdio.h>
int main() {
    int nach = 11;
    int kon = 12;
    int chis;

    scanf("%d",&chis);
    printf("%d\n",(chis >= nach) & (chis <=kon));

    long int chis1;
    scanf("%d",&chis1);
    chis1= chis1 >> 10;
    printf("%d",(chis1 % 2));
    return 0;
}




