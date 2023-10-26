#include <stdio.h>

int num1, num2;
int main() {
    if((scanf("%d%d", &num1, &num2) == 2)) {
        if (num2 == 0) {
            printf("%d %d %d n/a\n", num1+num2, num1-num2, num1*num2);
        } else {
            printf("%d %d %d %d\n", num1+num2, num1-num2, num1*num2, num1/num2);
        }
    } else {
        printf("n/a\n");
    }

    return 0;
}