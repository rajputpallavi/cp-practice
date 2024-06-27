/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

char* strcpy_custom(char* destination, const char* source) {
    char* ptr = destination;
    
   
    while (*source != '\0') {
        *ptr = *source;
        ptr++;
        source++;
    }
    

    *ptr = '\0';
    
    return destination;
}

int main() {
    char source[] = "Hello, world!";
    char destination[20]; 
    
    strcpy_custom(destination, source);
    
    printf("Copied string: %s\n", destination);
    
    return 0;
}
