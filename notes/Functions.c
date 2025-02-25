#include <stdio.h>

//calling a function:
//just use: FunctionName();

//void function doesent return value
//int returns
    void VoidFn(){
        //Error
        //return 0;
    }
    int IntFn() {
        //No error
        return 0;
    }

//Returns work like this:
    int IntReturnFn() {
        //Return is  for returning, insted of doint var thats 1 + 1 you can just return without making var, It's faster and more efficent
        //To make it return in printf just use this fn as int so:
        //printf("%d\n", IntReturnFn());
        return 1 + 1;
    }

//Fn Parameters
    //When you have: void ParVoidFn(%parameter place%, %parameter2 place%) {
    //  int a = x + y;
    //  printf("sum = %d", a)
    //}
    //You can do in parameter place: int x, int y
    //When you want to call a function and you wanna chainge x for b and y for c
    //Do: ParVoidFn(b, c);

//If you're not me. For more see: https://www.w3schools.com/c/c_functions.php

int main() {

    return 0;
}
