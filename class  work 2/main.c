/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int randomnumber=rand()%100 + 1;//-->rand()%(upper-lower+1)+lower
    int n,attempts=0;
    printf("Welcome to the Guess the number game!!\n ");
    printf("Try to guess the number ranging from 1 to 100\n");
    
    do{ printf("Enter the guess: ");
    scanf("%d",&n);
    attempts++;
    if (n==randomnumber){printf("\nCongratulations!!,you guessed the right number in %d attempts",attempts);}
    else if (n<randomnumber){printf("Too low! Try again.\n");}
    else if (n>randomnumber){printf("Too high! Try again.\n");}
    }
    while(n!=randomnumber);
    
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int i=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{ printf("%d X %d = %d \n",n,i,n*i);
    i++;
}
while(i<=10);
return 0;
}
*/
#include <stdio.h>
int isprime(int n){ if (n<=1){return 0};
for (i=2;i*i<=n;i++){if(n%i==)
