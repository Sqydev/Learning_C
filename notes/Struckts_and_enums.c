#include <stdio.h>
void Struckts() {
    struct s1 { //Structs are groups of vars
        int Name;
        float Height;
        float Widght;
    };

    struct s1 mystrc; //to acces struckt you have to make a var of it

    mystrc.Height = 1; //And doing this thingi

    //Btw strings will give error becouse strings in c are fucking retarded:)

    printf("%f", mystrc.Height);
}

void Eniums() {
    //cfvgb hcvb nbcvg njvb c
}

int main() {
    Struckts();
    return 0;
}
