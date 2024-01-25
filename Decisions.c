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
        printf("%.1f is less than 40000.0\n", num); // displayed
    }

    // change value in variable
    num += num;

    // use an if-else statement
    if (num < 40000.0) {
        printf("%.1f is less than 40000.0\n", num); // not displayed
    } else {
        printf("%.1f is not less than 40000.0\n", num); // displayed
    }

    // change value in variable
    num = 0;

    // use an if-else-if statement
    if (num == 0.0) {
        printf("%.1f is equal to 0.0\n", num); // displyed
    } else if (num < 0.0) {
        printf("%.1f less than 0.0\n", num); // not displayed
    } else {
        printf("%.1f greater than 0.0\n", num); // not displayed
    }

}

// this function uses the logical operators
void decisions2(void) {
    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    // use the logical AND operator
    if (num > 0.0 && num < 40000.0){
        printf("%.1f is between 0.0 and 40000.0\n", num); // displayed if all conditions are true - displayed
    }

    // change the value in variable 
    num += num;

    // use the logical OR operator
    if (num < 0.0 || num > 40000.0){
        printf("%.1f is not between 0.0 and 40000.0\n", num); // displayed if one condition is true - displayed
    }

    // use the logical NOT operator 
    // the NOT operator inveres the bool value its given
    if (!(num > 0.0 && num < 40000.0)) {
        printf("%.1f is not between 0.0 and 40000.0\n", num); // displayed
    }

}

// this function uses a bool variable
void decisions3(void) {
    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    // declare and initalize bool variable 
    bool isNotBetween = !(num > 0.0 && num < 40000.0); // false 

    // use bool variable in an if-else statement 
    if (isNotBetween) {
        printf("%.1f is not between 0.0 and 40000.0\n", num); // not displayed
    } else {
        printf("%.1f is between 0.0 and 40000.0\n", num); // displayed
    }
}

// this function uses the ternary operator
// the ternary operator is the only operator that has 3 operands
void decisions4(void) {
    // declare variable of type float that will be used in conditions
    // initialize it using macro value defined in header file
    float num = NUM;

    // num += num; - would change bool to true

    // declare and initalize bool variable 
    bool isNotBetween = !(num > 0.0 && num < 40000.0); // false 

    // declare a variable of type float 
    // initialize it using the ternary operator
    // operand 1 is a bool expression that gets evaluated (isNotBetween)
    // operand 2 is the value that gets returned if the bool expression is true (num - 40000.0)
    // operand 3 is the value that gets returned if the bool expression is false (0.0)
    float extra = isNotBetween ? (num - 40000.0) : 0.0; // operand 3 will get assigned to extra

    // display the value in extra
    printf("%.1f\n", extra);
}

// this function uses the switch statement
void decisions5 (void) {
    // declare variables 
    char operation; 
    int num1;
    int num2;

    // prompt user to input operation 
    printf("Enter an operation (+, -, *, /): ");
    scanf("%c", &operation);

    // prompt user to input numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // use switch statement to evaluate operation
    switch (operation)
    {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid operation!");
    }
}

// this function illustrates short circuit evaluation
// this is when the compiler skips the evaluation of 
// sub-expression in a logical expression
void decisions6(void) {
    // declare and initialize variables that will be used
    // in logical expressions
    int x = 1;
    bool y = true;

    // short circuit evaluation will not occur 
    // because all sub-expressions are true
    if (x == 1 && y){
        printf("If block executed.\n"); // displayed
    } else {
        printf("If block not executed.\n"); // not displayed
    }

    // short curcuit evaluation will occur
    // because the first sub-expression is false
    if (x == 0 && y){
        printf("If block executed.\n"); // not displayed
    } else {
        printf("If block not executed.\n"); // displayed
    }

    // short curcuit evaluation will occur
    // because the first sub-expression is true
    if (x == 1 || y){
        printf("If block executed.\n"); // displayed
    } else {
        printf("If block not executed.\n"); // not displayed
    }

    // short curcuit evaluation will not occur 
    // because the first sub-expression is false
    if (x == 0 || y){
        printf("If block executed.\n"); // displayed
    } else {
        printf("If block not executed.\n"); // not displayed
    }
}