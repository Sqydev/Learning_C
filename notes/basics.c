#include <stdio.h>
#include <stdbool.h>

//A bit retarted but logical, to print you give type in "" and comma after and then var
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

//Like everywere else
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

    //Shortcuts
    //variable = (condition) ? expressionTrue : expressionFalse;
    (a > b && a < c) ? printf("a > b && a < c") : printf("a > b && a > c");
}

//Normal
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

//Normal too
void WhileLoops() {
    int x = 1;
    while (5 >= x) {
        printf("%d\n", x);
        x++;
    }
}

//Normal
void ForLoops() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
}

//Normal
void ArraysyIStringi() {
    //Strings in C are yust array of chars
    char String[] = "Hello World!";
    //And you print by %s
    printf("\n%s\n\n", String);

    //There's no list couse arrays are dynamic
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

//Normal
void Matrix() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

//Normal
void Input() {
    int a;
    int b;
    printf("daj a: ");

    //Simple but you have to give & at begining
    scanf("%d", &a);
    printf("a = %d\n", a);

    //If you give two ot one input It will make it one by one
    printf("daj a i b: ");
    scanf("%d %d", &a, &b);
    printf("a = %d b = %d\n", a, b);

    //In strings you don't give & but you must specyfy size of strings and it save's only one word
    char stringi[3];
    printf("daj string: ");
    scanf("%s", stringi);
    printf("string = %s\n", stringi);

    //For more than 2 words use fgets and give getchar() before fgets
    char stringifull[30];
    printf("give string:\n");
    getchar();
    fgets(stringifull, sizeof(stringifull), stdin);
    printf("string = %s\n", stringifull);
}

void MemoryAdress() {
    int a;
    printf("%p\n", &a);
}

//!!!!!!!!!!!!
void Pointers() {

    //& is a adress operator, It's for getting an adress from a VARIEBLE

    int age = 17; //makes int age
    int *pAge = &age; //makes pointer thats stores adress of age
    void *pAge2 = &age; //makes the pointer that doesent care if var is int or char. You can just give this ponter var of eny type

    printf("%d\n", age); //Outs value of age (17)
    printf("%p\n", &age); //Outs adres of age
    printf("%p\n", pAge); //Outs mem adress of age by pointer
}

//Normal
void printy() {
    printf("Hello World!\n");
}

int main() {
    Matrix();
    return 0;
}
