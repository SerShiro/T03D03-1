#include <stdio.h>

int num1;
float num2;
int main() {
    if((scanf("%d%f", &num1, &num2) == 2) && num2 == (float)((int)num2)) {
        int newNum = (int)num2;
        if (newNum == 0) {
            printf("%d %d %d n/a", num1+newNum, num1-newNum, num1*newNum);
        } else {
            printf("%d %d %d %d", num1+newNum, num1-newNum, num1*newNum, num1/newNum);
        }
    } else {
        printf("n/a");
    }

    return 0;
}