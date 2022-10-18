#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a value for the angle alpha in Degree\n");
    float alpha = 0;
    scanf("%g", &alpha);
    alpha = 180/M_PI * alpha;

    float z1 = ((1-2*pow(sin(alpha),2)))/(1+sin(2*alpha));
    printf("z1 = %g\n",z1);

    float z2 = (1-tan(alpha))/(1+tan(alpha));
    printf("z2 = %g\n",z2);

    return 0;
}
