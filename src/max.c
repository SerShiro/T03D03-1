#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int num1;
    float num2;
    if (scanf("%d %f", &num1, &num2) == 2 && num2 == (float)((int)num2)) {
        int newNum = (int)num2;
        printf("%d\n", max(num1, newNum));
    } else {
        printf("n/a\n");
    }
}