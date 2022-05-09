// How to gather and use inputs

#include <stdio.h>
#define Pi 3.1415f

int main(void){
    float radius;
    float diameter;

    puts("Input the radius of your circle: "); // Puts acts like printf but adds a \n at thé end. It also only supports a single string as input
    scanf("%f", &radius); // & refers to the ADDRESS of the variable, since this is where we want to store the value

    diameter = 2 * radius;
    printf("Your circle of radius %.3f should have a diameter of %.3f\n", radius, diameter);
    printf("Your circle also has a perimeter of %.3f\n", Pi*diameter);

    const short nb_circles = 1;

    // nb_circles = 2;
    // This rasises: error: assignment of read-only variable 'nb_circles'

    printf("You have %hi circle(s)", nb_circles);    

    return 0;
}
