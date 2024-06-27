/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 printf("1");
//             }
//             else printf("0");
//         }printf("\n");
//     }
// }


#include <stdio.h>
//sales
int main()
{
int a[4][3];
int i,j;
printf("enter the values:\n ");
for (i=0;i<4;i++){
    for (j=0;j<3;j++){ scanf("%d",&a[i][j]);
}}

printf("The matrix is: \n");
for (i=0;i<4;i++){
    for (j=0;j<3;j++) {printf("%d \t",a[i][j]);
    }
    printf("\n");
}

//sales by each girl
for (int i=0;i<4;i++){
    int sales=0;
    for(int j=0;j<3;j++){ sales=sales+a[i][j];
}
printf("The sales by %d girl = %d \n",i+1,sales);
    
}





