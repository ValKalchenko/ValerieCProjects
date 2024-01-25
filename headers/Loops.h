// pre-processor directives 

// create macro values (constants)
#define STOP 0
#define START 10

// create macro expressions (constants)
#define CONDITION(i) (i > STOP)
#define BREAK(i) (i == 5)
#define CONTINUE(i) (i % 2)

// inlcude C header file
#include <stdio.h>

// function declarations
void loop1(void);
void loop2(void);
void loop3(void);
void loop4(void);
void loop5(void);
void recursion(void);