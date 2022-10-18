#include <stdio.h>
int main() {
    int kolmin;
    scanf("%d",&kolmin);
    int abonplat;
    scanf("%d",&abonplat);
    int stoimsverh;
    scanf("%d",&stoimsverh);
    if (stoimsverh <= abonplat/499){
        printf("Vi narushili uslovie, poprobuite eshe raz");
        scanf("%d",&stoimsverh);
    }
    if (kolmin <=499){
        printf("%d",abonplat);
    } else {
        printf("%d", abonplat + (kolmin-499) * stoimsverh);
    }
    return 0;
}


