/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
char s[100];
scanf("%s",s);
int len=0;
for (int i=0;s[i]!='\0';i++){
    len=len+1;
}
for(int i=len;i>=0;i--){
    printf("%c",s[i-1]);
}
}
