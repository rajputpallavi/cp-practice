/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>

// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int flag=0;
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<5;i++){
//         if (arr[i]==n){
//             flag=1;}
        
//     }
//     if(flag==1){
//         printf("found");
//     }
//     else
//     printf("not found");
// }


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rem=0, a=n;
    while(n>0){
        rem=rem*10+n%10;
        n=n/10;
    }
    if (rem==a){printf("palindrome");
}
else{printf("not palindrome");}
}
