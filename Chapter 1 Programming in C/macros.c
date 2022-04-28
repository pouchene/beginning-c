/* 
 * Written by Pierre Ouchene
 * Created on 28-04-2022
*/

#include <stdio.h> // Preprocessor directive

#define AGE 23

int main(void)
{
    printf("I am %d years old\n", AGE);
    printf("Next year I will (hopefully) turn %d\n", AGE + 2);
    printf("(No no, it makes sense when you think about it))");

    return 0;
}
