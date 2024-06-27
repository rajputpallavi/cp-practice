/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

// *******************************************************************************/
// #include <stdio.h>
// //sales
// int main()
// {
// int a[4][3];
// int i,j;
// printf("enter the values:\n ");
// for (i=0;i<4;i++){
//     for (j=0;j<3;j++){ scanf("%d",&a[i][j]);
// }}

// printf("The matrix is: \n");
// for (i=0;i<4;i++){
//     for (j=0;j<3;j++) {printf("%d \t",a[i][j]);
//     }
//     printf("\n");
// }

// //sales by each girl
// for (int i=0;i<4;i++){
//     int sales=0;
//     for(int j=0;j<3;j++){ sales=sales+a[i][j];
// }
// printf("The sales by %d girl = %d \n",i+1,sales);
    
// }

// //total value of each item sold
//  for (int j = 0; j < 3; j++) {
//      int columnsum=0;
//         for (int i = 0; i < 4; i++) {
//             columnsum += a[i][j];
//         }
//         printf("The total value of %d item = %d \n",j+1,columnsum);
//     }

// //the grand total
// int grandtotal=0;
// for (i=0;i<4;i++){
    
//     for(j=0;j<3;j++){
//         grandtotal+=a[i][j];
        
//     }
// }
// printf("The grand total is %d",grandtotal);
// }

// #include <stdio.h>
// int main(){
//     int i,j;
//     int arr[3][3]={{1,2,3},
//              {2,5,6},
//              {4,7,2}};
//     for (i=0;i<)
// }


#include <stdio.h>

int main() {
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int transpose[3][3];
    int i, j;

    // Finding transpose
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            transpose[j][i] = A[i][j];
        }
    }

    // Displaying the original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Displaying the transpose matrix
    printf("\nTranspose of Matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}