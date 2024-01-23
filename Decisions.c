// pre-processor directives 

// include Decisions.h header file
#include "./headers/Decisions.h"

// write code for functions delared in Decisions.h

// this funciton uses the comparison operators
// and the if, if-else, and if-else-if statements 
void decisions1(void) {

    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    // use an if statement
    if (num < 40000.0) {
        printf("%.1f is less than 40000.0\n", num);
    }

    // change value in variable
    num += num;

    // use an if-else statement
    if (num < 40000.0) {
        printf("%.1f is less than 40000.0\n", num);
    } else {
        printf("%.1f is not less than 40000.0\n", num);
    }

    // change value in variable
    num = 0;

    // use an if-else-if statement
    if (num == 0.0) {
        printf("%.1f is equal to 0.0\n", num);
    } else if (num < 0.0) {
        printf("%.1f less than 0.0\n", num);
    } else {
        printf("%.1f greater than 0.0\n", num);
    }

}