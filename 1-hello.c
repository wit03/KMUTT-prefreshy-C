#include <stdio.h> //1. Preprocessor Directive
#define pf printf //Preprocessor Directive (Defining Word for function)

int global = 6; //2. Global Declaration (Global Variable)

//3. Main Function
int main() { 
    pf("Hello World!");
    return 0;
}