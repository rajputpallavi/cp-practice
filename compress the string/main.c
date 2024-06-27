/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{ char str[]="aabbaabcc";
 int count =1;
 int a =strlen(str);
 for (int i=0;i<a;i++){
     if (str[i]==str[i+1]){
      count++;
     }
     
 else {  printf("%c%d",str[i],count);
 count =1;
}}
   
}

