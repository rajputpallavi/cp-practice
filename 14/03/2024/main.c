/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>

// int sum_of_squares(int arr[], int n) {
//     int sum_squares = 0;
//     for (int i = 0; i < n; i++) {
//         sum_squares += arr[i] * arr[i];
//     }
//     return sum_squares;
// }

// int main() {
//     int n;
//     printf("Enter the number of values: ");
//     scanf("%d", &n);
    
//     int x[n];
//     printf("Enter the values:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &x[i]);
//     }
    
//     printf("Entered values: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", x[i]);
//     }
//     printf("\n");
    
//     int result = sum_of_squares(x, n);
//     printf("Sum of squares: %d\n", result);

//     return 0;
// }

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int array[ROWS][COLS];
    
    printf("Enter %d x %d array elements:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter element for position [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("\nTraversing the 2D array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}