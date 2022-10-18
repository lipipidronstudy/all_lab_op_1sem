#include <stdio.h>
#include <stdlib.h>
int main() {
    char *mass;
    int  n;
    char znak;
    scanf("%d\n",&n);
    mass =(char*) malloc ((n*sizeof(char)));
    for (int i = 0; i < n; ++i){
        scanf("%c",&znak);
        if (znak != ' '){
            mass[i] = znak;
        } else {
            i = i-1;
        }
    }

   for (int i = 0; i < n; ++i) {
        printf("%d %c\n",i+1,mass[i]);
    }
    free(mass);
    return 0;
}




