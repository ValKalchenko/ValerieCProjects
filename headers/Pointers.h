// pre-processor directives 

// include C header file
#include <stdio.h>

// declare global variables 
// we will be storing their address in pointers
static int i = 17;
static double j = 17.55;

// function declarations 
void printAddress(void);
int * getAddress(void); // returning a pointer to an int
int getDataAtAddress(void);
double storeDataAddress(void);
int getDoubleBytes(void);
int getPointerToDoubleBytes(void);
void pointerToNull(void);
int getIntByte(void);
int getPointerToIntBytes(void);