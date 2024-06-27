/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*int main()
{ int n;
    printf("enter the age: ");
    scanf("%d",&n);
    if (n>=18){
        printf("you are eligible for voting");
    }
    else{
        printf("oops! you are not eligible for voting");
    }

    return 0;
}
*/

/*int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (n>0){
        printf("number is positive");
    }
    else if (n<0){
        printf("number is negative");
    }
    else{ printf("number is zero");
}}
*/
int main(){ 
    int ch;
    printf("Welcome To MP Restaurant\n\tMENU\n1.Pizza\t\t99/-\n2.Pasta\t\t69/-\n3.Burger\t45/-\n4.Pastry\t30/-\n5.Virgin Mozito\t56/-");
    printf("\nPlace your order(1/2/3/4/5):");
    scanf("%d",&ch);

    if (ch==1){
        printf("your order is Pizza");
    }
    else if (ch==2){
        printf("your order is Pasta");
    }
    else if (ch==3){
        printf("your order is Burger");
    }
    else if (ch==4){
        printf("your order is Pastry");
    }
    else if (ch==5){
        printf("your order is Virgin Mozito");
    }
}


