#include <stdio.h>
#include <stdbool.h>

//Takie troszkę upośledzone ale logiczne, dajesz typ w "" i przecinek a potem dajesz jakie zmienne
void zmienne() {
    int number = 1;
    char character = 'A';
    float floatNumber = 3.14;
    bool boolValue = true;

    printf("%d\n", number);
    printf("%f\n", floatNumber);
    printf("%c\n", character);
    printf("%d\n\n", boolValue);

    printf("Int = %d, Float = %f, Char = %c, Bool = %d\n", number, floatNumber, character, boolValue);
}

//Normal
void comparing() {
    int a = 5;
    int b = 10;

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n\n", a <= b);

    printf("1 == 1: %d\n", 1 == 1);
    printf("1 != 1: %d\n", 1 != 1);
    printf("1 > 1: %d\n", 1 > 1);
    printf("1 < 1: %d\n", 1 < 1);
    printf("1 >= 1: %d\n", 1 >= 1);
    printf("1 <= 1: %d\n", 1 <= 1);
}

//W sumie jak zawsze/wszędzie
void IfElseItd() {
    int a = 10;
    int b = 20;
    int c = 30;

    if (a > b && a < c) {
        printf("a > b && a < c");
    }
    else if (a < b && a < c) {
        printf("a < b && a < c\n");
    }
    else {
        printf("a > b && a > c\n");
    }

    printf("Skruty\n");

    //Skruty
    //variable = (condition) ? expressionTrue : expressionFalse;
    (a > b && a < c) ? printf("a > b && a < c") : printf("a > b && a > c");
}

//Nie lubie tego ale normalne
void SwitchCase() {
    int a = 4;

    switch (a) {
      case 1:
        printf("1");
        break;
      case 2:
        printf("2");
        break;
      case 3:
        printf("3");
        break;
      case 4:
        printf("4");
        break;
      case 5:
        printf("5");
        break;
      case 6:
        printf("6");
        break;
      case 7:
        printf("7");
        break;
      default:
        printf("7+");
        break;
    }
}

//Też normalne
void WhileLoops() {
    int x = 1;
    while (5 >= x) {
        printf("%d\n", x);
        x++;
    }

    //od-while nie będę robił bo po co to jest
}

//Normalne
void ForLoops() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
}

//Normalne
void ArraysyIStringi() {
    //Stringi w C to po prostu arrayka charów(character)
    char String[] = "Hello World!";
    //I printujesz %s
    printf("\n%s\n\n", String);

    //List nie ma bo array może być dynamiczny
    int arrr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(arrr) / sizeof(arrr[0]); i++) {
        printf("Arrr = %d\n", arrr[i]);
    }
    printf("\n");
    arrr[0] = 0;
    for (int i = 0; i < sizeof(arrr) / sizeof(arrr[0]); i++) {
        printf("Arrr = %d\n", arrr[i]);
    }
}

//Normalne
void Matrix() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void Input() {

}

//Normalne
void printy() {
    printf("Hello World!\n");
}

int main() {
    Matrix();
    return 0;
}
