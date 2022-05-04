/* Floating point numbers */
#include <stdio.h>

int main(void){
    // Ex:
    float fl = 1.4;    
    // Use of eponent
    float bigger_fl = 1.4E7;   
    /* Floats are represented over 4 bytes, with:
    * 1 bit for sign
    * 8 bits for exponent (unsigned eight bit value, shifted by 127. -127 - 128)
    * If exponent iz -127, it is stored as zero, and only used to write 0 with sign and mantissa 0 as well
    * 23 bits for mantissa (1.bbbbb...bbb)
    * Actual number is 1.bbbb...bbb * 2 ^ exponent
    */ 
    // ROUNDING ERROR: as an example, 1/3 can never be stored exactly as a sum of 1/2^k    
    /* Precisions:
    * float        4b  +-3.4  E+-38    6 to 7 decimal digits precision
    * double       8b  +-1.7  E+-308   15 decimal digits precision
    * long double  12b +-1.19 E+-4932  18 decimal digits precision
    */ 
    
    double my_double = 1.5E3;

    long double lg_db = 3.5E89L;

    float num = 1.4f;
    float den = 30.0f;
    float res = num / den;

    // Divide and print result ROUNDED to the 4th and 7th decimal
    printf("If you divide %.2f by %.3f you get %.4f\nMore precisely %.7f\n", num, den, res, res);

    return 0;
}
