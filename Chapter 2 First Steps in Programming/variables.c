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

    int box_capacity = 12;

    printf("If I had %d more apples, I could store them perfectly in boxes of %d.\n", (-apples) % box_capacity, box_capacity);
    
    printf("The modulo (%%) does not behave as expected with negative operands. Ex: -2 %% 5 = %d. \n", -2 % 5);

    printf("By the way, to print %% you have to write %%%%.\n", -2 % 5);

/* With the modulus operator, the sign of the result is always the same as the sign of the left operand whether or not the operands have different signs.
 * Thus,            45 % –7 evaluates to  3,
 * whereas         –45 %  7 evaluates to –3.
 * and             -45 % -7 evaluates to -3.
 */

    return 0;
}
