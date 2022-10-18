#include <stdio.h>

int main() {
    char mass[4];
    char *p = mass;
    char bukv;
    for (int i = 0; i < 4; ++i) {
        scanf("%c" , &bukv);
        if (bukv != ' '){
            mass[i] = bukv;

        } else {
            i -=1;
        }
    }
    for (int i = 0; i < 4; ++i) {
        printf("%d %c \n",i+1,*(p+i));
    }
    return 0;
}





