#include <stdio.h>
#include <math.h>

float expon(float x, float y) {
    return x*pow(10.0,y);
}

int main() {
    float x;
    if (scanf("%f", &x) == 1) {
        float result = expon(7.0,-3.0)*pow(x,4.0)+((22.8 * pow(x,(1.0/3.0)) - expon(1.0, 3.0)) * x + 3) / (x * x / 2.0) - x * pow((10.0+x),(2.0/x)) - 1.01;
        if (isnan(result)) {
            printf("n/a");
            return 0;
        }
        printf("%.1f", result);
    } else {
        printf("n/a");
    }
    return 0;
}