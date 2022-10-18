#include <stdio.h>
#include <math.h>

void zap(int n, int rast[n][n-1], int koordx[], int koordy[]){
    int count = 0;
for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
        if (i!=j) {
            rast[count][i] = sqrt(pow(koordx[i] - koordx[j],2) + pow(koordy[i] - koordy[j],2));
                    ++count;
        }
    }
    count = 0;
}
}
int main() {
    int n;
    scanf("%d",&n);
    int rast[n][n-1];
    int koordx[n];
    int koordy[n];
    for (int i = 0; i < n; ++i){
        scanf("%d %d",&koordx[i], &koordy[i]);
    }
    zap(n,rast,koordx,koordy);
    for(int i = 0; i <=n; ++i){
        for(int j = i; j <= n-1; ++j) {
            if (i != j) {
                printf("From %d to %d: %d ", i + 1, j + 1, rast[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}



