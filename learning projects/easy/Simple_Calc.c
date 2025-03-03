#include <stdio.h>

int calculate(int type, int a, int b) {
    switch (type) {
        case 1 :
            return a + b;
            break;
        case 2:
            return a - b;
            break;
        case 3:
            return a * b;
            break;
        case 4:
            return a / b;
            break;
    }
    return 0;
}

int main() {
    int type, a, b;
    printf("Give type(1 for addiction, 2 for substraction, 3 for multiplication, 4 for divicion): ");
    scanf("%d", &type);
    printf("Please give Number1: ");
    scanf("%d", &a);
    printf("Please give Number2: ");
    scanf("%d", &b);
    printf("Solution = %d\n", calculate(type, a, b));
    return 0;
}
