/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Factorial of %d = %d\n", num, factorial(num));

//     return 0;
// }


// #include <stdio.h>

// int factorial(int n) {
//     int result = 1;
//     for (int i = 1; i <= n; ++i) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Factorial of %d = %d\n", num, factorial(num));

//     return 0;
// }


// #include <stdio.h>


// int power(int base, int exponent) {
//     int result = 1;

//     for (int i = 0; i < exponent; ++i) {
//         result *= base;
//     }

//     return result;
// }

// int main() {
//     int base, result;
//     int exponent;

//     printf("Enter the base: ");
//     scanf("%d", &base);

//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);

   
//     result = power(base, exponent);
//     printf("%d^ %d = %d", base, exponent, result);

//     return 0;
// }


// #include <stdio.h>

// int isLeapYear(int year) {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return 1; // Leap year
//     } else {
//         return 0; // Not a leap year
//     }
// }

// int main() {
//     int year;

//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if (isLeapYear(year)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     char *ptr = alphabets;

//     
//     for (int i = 0; i < 26; i++) {
//         printf("%c ", *ptr);
//         ptr++;
//     }

//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char ch = 'A';

//     char *p = &ch;

//     printf("Capital letters from A to Z:\n");
//     for (int i=0; *p <= 'Z'; (*p)++) {
//         printf("%c ", *p);
//     }

//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// void cal(int *,int *);
// int main(int *,int *){
//     int sum,avg;
//     cal(&sum,&avg);
//     printf("%d %d \n",sum,avg);
//     return 0;
//     }
    
// void cal(int *sum ,int*avg ){
//     int n1,n2,n3,n4,n5;
//     printf("Enter ");
//     scanf("%d %d %d %d %d ",&n1,&n2,&n3,&n4,&n5);
//     *sum=n1+n2+n3+n4+n5;
//     *avg=*sum/5;
// }
