/* Head comment here */

#include <stdio.h>

/* Different types can be used for integers. Each type uses more or less bytes of memory, thus allows for bigger or smaller values to be stored.
 *
 * char         1 byte
 * short        2 bytes
 * int          4 bytes
 * long         4 bytes
 * long long    8 bytes
 * 
*/

// The unsigned version of each integer type is an "absolute value" with double magnitude (the sign bit is freed).

int main(void){
    
    int normal = 25;
    printf("Int %d\n", normal);

    long Big_Number = 1226584L; // Note the L at the end of the value. l is also allowed but can (and will) be confused for a 1.
    printf("L %d\n", Big_Number);

    long long Very_Big_number = 42LL; // I mean it can be very big, but doesn't have to be.
    printf("LL %d\n", Very_Big_number);

    unsigned int absolute_steps = 13U; // This type we append U forunsugned values.
    printf("U %u\n", absolute_steps);

    unsigned long Milimeters_To_Race = 2147483649UL; // You can put U before the L or LL. It is still unclear if the reverse is possible.
    printf("ULL %%d %d\n", Milimeters_To_Race);
    printf("ULL %%u %u\n", Milimeters_To_Race);

    /* /!\ 
     * Maximum integer value (as ULL) is 18,446,744,073,709,551,615. 
     * However when printed with %d, it is casted to SIGNED integer
     * Thus, 2147483649 becomes -2147483647,
     * and 2147483648 would become -2147483648
     * /!\
     * 
     * Format tags prototype is %[flags][width][.precision][length]specifier
     * 
     * 
     * 
     */

    // It is possible to write number in hexadecimal base (base 16) witht he prefix 0x

    unsigned long long Testing_Limits = 18446744073709551613ULL; // You can put U before the L or LL. It is still unclear if the reverse is possible.
    printf("ULL %%d %d\n", Testing_Limits);
    printf("ULL %%u %u\n", Testing_Limits);
    printf("ULL %%u %llu\n", Testing_Limits);

    unsigned int hexa = 0x05ff;
    printf("U Hexa %d\n", hexa);

    unsigned long long Big_Hexa = 0xfababULL; // 1026987
    printf("ULL Hexa %x\n", Big_Hexa);
    printf("ULL Hexa %llx\n", Big_Hexa);
    printf("ULL Hexa %llu\n", Big_Hexa);

    /* Hexadecimal is quite useful as each hexadicmal digit represents 4 bits.
     * 2 hexadecimal digits represent a byte.
     *
     * char         1 byte      2 hexadecimal digits
     * short        2 bytes     4 hexadecimal digits
     * int          4 bytes     8 hexadecimal digits
     * long         4 bytes     8 hexadecimal digits
     * long long    8 bytes     16 hexadecimal digits
     * *
    */

   /* /!\ Numbers starting with a 0 (ex: 010) are in Octal base (base 8). Take care to not use one by mistake. /!\ */

    return 0; // return 0U or 0L should fail since typing is incorrect.

}
