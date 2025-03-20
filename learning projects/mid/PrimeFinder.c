#include <stdio.h>

//YESSSSSSSSSSSSSSSSSSSSSS
int main() {
    //setup
    int ile;
    int numb = 1;
    printf("how much: ");
    scanf("%d", &ile);

    //main loop
    for(int i = 0; i < ile; numb++){
        int is_prime = 1;
        //debug message
        //printf("| i = %d, numb = %d | ", i, numb);
        for(int cheacker = numb - 1; 1 < cheacker; cheacker--) {
            if(numb % cheacker == 0) {
                //another debug message
                //printf("| nie = %d | ", numb);
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1) {
            printf("| %d | ", numb);
            i++;
        }
    }
    printf("\n");
    return 0;
}
