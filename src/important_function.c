#include <stdio.h>
#include <math.h>

const e = 2.71828182845904523536;


float expon(float x, float y) {
    return x*pow(10.0,y);
}

int main() {
    float x;
    if (scanf("%f", &x) == 1) {
        float result = expon(7.0,-3.0)*pow(x,4.0)+((22.8 * pow(x,(1.0/3.0)) - expon(1.0, 3.0)) * x + 3) / (x * x / 2.0) - x * pow((10.0+x),(2.0/x)) - 1.01;
        printf("%.1f\n", result);
    } else {
        printf("n/a\n");
    }
    return 0;
}