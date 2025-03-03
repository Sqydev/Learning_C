#include <stdio.h>

void StaticMem() {
    //Static is memory that's alocated to varieble before program runs.
    //You can't realocate StaticMemory.
    int Numb[20];
    printf("%lu\n", sizeof(Numb));
}

void DynamicMem() {

}

int main() {
    StaticMem();
    return 0;
}
