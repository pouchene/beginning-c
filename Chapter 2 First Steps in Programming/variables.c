/* First use of variables in C */

#include <stdio.h>

int main(void)
{
    int apples; // Variable declaration
    apples = 5;
    
    int recipe_requirement = 7; // Declare AND define a variable simultaneously

    printf("%d apples is a lot, but %d is more.\n", apples, apples + 3);

    printf("%d apples are required for my super-apple-pie. Do I have enough?\n", recipe_requirement);

    printf("Maybe, I have %d more apples than required.\n", apples - recipe_requirement);

    printf("This means I need %d more.\n", recipe_requirement - apples);

    return 0;
}
