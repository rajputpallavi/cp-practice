/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int arr[5];
   for (int i=0;i<5;i++){
       scanf("%d",&arr[i]);
      
       }
       
    for(int i=0;i<5;i++){
         printf("%d",arr[i]);
    }
      
   
int pos=3;
for (int j=pos;j<5;j++){
    arr[j]=arr[j+1];
}
printf("\n");
    
    for(int j=0;j<4;j++){
         printf("%d",arr[j]);
    }
   
}
