#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    float a;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("z1 = %f\n", 2 * sin(3 * M_PI - 2 * a) * sin(3 * M_PI - 2 * a) * cos(5 * M_PI + 2 * a) * cos(5 * M_PI + 2 * a));
    printf("z2 = %f", (1.0/4) - (1.0/4) * sin((5.0/2) * M_PI - 8 * a));

    return 0;
}