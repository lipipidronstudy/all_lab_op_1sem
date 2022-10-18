#include <stdio.h>

struct sost {
    unsigned int sostoyan;
};
union Klaviatura {
    struct sost q;
    struct {
        unsigned NumLock: 1;
        unsigned CapsLock: 1;
        unsigned ScrollLock: 1;
    } byte;
};

int main() {
    int t;
    scanf("%x", &t);
    struct sost znach;
    znach.sostoyan = t;
    union Klaviatura new;
    new.q = znach;
    if (new.byte.NumLock == 1) {
        printf("NumLock on\n");
    } else {
        printf("NumLock off\n");
    }
    if (new.byte.CapsLock == 1) {
        printf("CapsLock on\n");
    } else {
        printf("CapsLock off\n");
    }
    if (new.byte.ScrollLock == 1) {
        printf("ScrollLock on\n");
    } else {
        printf("ScrollLock off\n");
    }
    return 0;
}




