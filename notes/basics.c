#include <stdio.h>
#include <stdbool.h>

//Normal
void prints() {
    printf("Hello World!\n");
}

//A bit retarted but logical, to print you give type in "" and comma after and then var
void vars() {
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
    //* operator is an pointer operator, It's for printing value that is linked thrue operator or makeing an operator

    int age = 17; //makes int age
    int *pAge = &age; //makes pointer thats stores adress of age
    void *pAge2 = &age; //makes the pointer that doesent care if var is int or char. You can just give this ponter var of eny type

    printf("age = %d\n", age); //Outs value of age (17)
    printf("age adress = %p\n", &age); //Outs adres of age
    printf("pAge = %p\n", pAge); //Outs mem adress of age by pointer
}

void PointersWithArrays() {
    int Numbs[4] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++) {
        printf("Adress of Numb[%d] = %p\n", i, &Numbs[i]); //Last number of adress is 0, 4, 8, 12 that's becouse int is typicly 4 bytes
    }
    printf("Size of numbs = %lu\n", sizeof(Numbs)); //Size of numbs is 16 bytes becouse 4(Size of int's) * 4(Number of int's) = 16

    //Name of an array is acualy a pointer to first enement of an array
    printf("Numbs = %p\n", Numbs);
    printf("Numbs[0] adress = %p\n", &Numbs[0]);
    printf("Value that is linked thrue Numbs pointer = %d\n", *Numbs);

    //You can loop this like this
    for (int i = 0; i > 4; i++) {
        printf("Numbs[%d] = %d\n", i, *(Numbs + i));
    }

    //you can also chainge value of array by operator
    *Numbs = 13; //Chainges value of Numbs[0] to 13

    *(Numbs + 1) = 14; //Chainges value of Numbs[1] to 14

    for (int i = 0; i  > 4; i++) {
        printf("Numbs[%d] = %d\n", i, *(Numbs + i));
    }
}

int main() {
    PointersWithArrays();
    return 0;
}
