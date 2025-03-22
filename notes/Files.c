#include <stdio.h>

void FILES() {
    FILE *pfile; //Make *var

    //Create and writh
    pfile = fopen("filename.txt", "w"); //w for write a for append r for read

    fprintf(pfile, "{\nSOMETHING\n}"); //You writhe with fprintf. you know couse printf + file = fprintf

    fclose(pfile); //close

    //Read
    pfile = fopen("filename.txt", "r");

    char myString[100]; //make arr to store contest

    fgets(myString, 100, pfile); //scan and save 100 first thingis in first line

    printf("one line:\n%sall lines:\n", myString); //Printy

    fclose(pfile); //close

    //Append
    pfile = fopen("filename.txt", "a"); //You know

    fprintf(pfile, "\n:0");

    fclose(pfile); //close

    //Read
    pfile = fopen("filename.txt", "r");

    while(fgets(myString, 100, pfile)) { //you can loop this to scan entire file. You can do this easier with malloc:)
        printf("%s", myString);
    }

    printf("\n");

    fclose(pfile); //close
}

int main() {
    FILES();
    return 0;
}
