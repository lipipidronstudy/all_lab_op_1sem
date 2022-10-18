#include <stdio.h>

int per8(int nach){
int new = 0;
int mnoj = 1;
    while (nach!= 0){
    new = nach % 8 * mnoj;
    mnoj*=10;
    nach = nach / 8;
}
    return new;
}

int main() {
    printf("Enter a number in 10 number system\n");
    //1
    int chis;
    scanf("%d",&chis);
    //2
    printf("%x\n",chis);
    //3
    int v8 = 0;
    v8 = chis;
    int v8sdv = v8 << 3;
    printf("%o,%o\n",chis,v8sdv);
    //4
    int v8otr =~v8;
    printf("%o\n",v8otr);
    //5
    int biti = 0;
    scanf("%o",&biti);
    int res = biti & per8(v8);
    printf("%o\n",res);

    return 0;
}

