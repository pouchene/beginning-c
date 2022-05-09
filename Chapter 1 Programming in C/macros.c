/**
 * @file macros.c
 * @author Pierre Ouchene
 * @date 2022-04-28
 * 
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
