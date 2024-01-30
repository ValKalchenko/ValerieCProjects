// pre-processor directives

//include needed C and header files
#include "BasicIo.c"
#include "Decisions.c"
#include "Loops.c"
#include "Functions.c"

int main(void){
    /* BasicIo */
    // output();
    // input();

    /* Decisions */
    // decisions1();
    // decisions2();
    // decisions3();
    // decisions4();
    // decisions5();
    // decisions6();

    /* Loops */
    // loops1();
    // loops2();
    // loops3();
    // loops4();
    // loops5();
    // recursion(START);

    /* Functions */
    // declare 3 character arrays
    char student[] = "Valerie Kalchenko";
    char language[] = "C";
    char programmer[] = "Dennis Ritchie";
    congradulate1(student, language, programmer);
    congradulate2(student, language, programmer);

    printf("%.1f degrees celsius = %.1f degrees fahrenheit.\n", 0.0, fahrenheitFromCelcius(0.0));
    printf("%.1f degrees celsius = %.1f degrees fahrenheit.\n", 100.0, fahrenheitFromCelcius(100.0));
}