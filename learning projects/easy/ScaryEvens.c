#include <stdio.h>

int main() {
    int ile;
    int numb = 1;
    printf("Input number of evens to return or write 0 to make generating infinite\n");
    printf("how much: ");
    scanf("%d", &ile);

    for(int i = 0; (ile > 0) ? i < ile : i > -1; i++, numb ++) {
        printf("| %d |", numb * 2);
    }

    printf("\n");
    return 0;
}
