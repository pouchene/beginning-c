/**
 * @file macros.c
 * @author Pierre Ouchene
 * @date 2022-04-28
 * 
 */

#include <stdio.h> // Preprocessor directive

int main(void)
{
    printf("Hello, good luck :)\n"); // Do not forget the semi-columns at the end of statements
    printf("You can't \"escape\" me :\\\n"); // Do not forget the semi-columns at the end of statements

    printf("Ding dong \a \n"); // \a inserts an alert character

    printf("\?\?= --> ??= (#) \n"); // Trigraphs ??* can be used to print some characters, but this is mostly outdated
    printf("\?\?/ --> ??/ (\\) \n"); // Now trigraphs will trigger a compilation warning. Be warned \a
    printf("\?\?' --> ??' (^) \n");
    printf("\?\?( --> ??( ([) \n");
    printf("\?\?< --> ??< ({) \n");
    printf("\?\?! --> ??! (|) \n");
    printf("\?\?) --> ??) (]) \n");
    printf("\?\?> --> ??> (}) \n");
    printf("\?\?- --> ??- (~) \n");
    
    return 0;
}
