#include <stdio.h>

//It runs around 4 times faster with 10.000 then not-optimized version. (Orginal: 4sec, Optimazed: 1sec)
int main() {
    int ile;
    int numb = 2;
    printf("Input number of primes to return or write 0 to make generating infinite\n");
    printf("how much: ");
    scanf("%d", &ile);

    //main loop
    for(int i = 0; (ile > 0) ? i < ile : i > -1; numb++){
        int is_prime = 1;
        //printf("| i = %d, numb = %d | ", i, numb);
        for(int cheacker = numb / 2; 1 < cheacker; cheacker--) {
            //printf("/%d/", cheacker);
            if(numb % cheacker == 0) {
                //printf("| nie = %d | ", numb);
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1) {
            printf("| %d | ", numb);
            i++;
            continue;
        }
    }
    printf("\n");
    return 0;
}
