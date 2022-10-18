#include <stdio.h>
int main() {

    char str[100] = {0};
    printf("Enter string: ");
    scanf("%[^\n]s",str);


    float vesh;
    printf("Enter float number: ");
    scanf("%f",&vesh);

    printf("Your string: %s\n",str);
    printf("Your number: %.4f",vesh);

    return(0);
}
