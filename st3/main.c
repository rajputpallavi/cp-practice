/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
// int main(){
//     int n=4;
//     int arr[4];
//     for(int i=0;i<4;i++){
//         scanf("%d",&arr[i]);
//     }
    
//     for(int j=n-1;j>=0;j--){
//         printf("%d",arr[j]);
//     }
    
// }

// #include <stdio.h>
// int main(){
//     int n; int sum=0;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         printf("%d",2*i-1);
//               sum+=i;
    
  
//     }
//     printf("\nThe sum is %d",sum);
// }


// #include <stdio.h>
// void check( int a);
// int main(){
//     int t,n;
//     int count;
//     printf("Enter numner of test cases:");
//     scanf("%d",&t);
//     for (int i=0;i<t;i++){
//         scanf("%d",&n);
//         check(n);
//     }

// }

// void check(int a){
        
//         int flag=0; int count=0,rem=0,sum=0,z;int rev=0;
//         while (a>0){
//             z=a%10;
//             sum+=z;
//             rem=z+rem*10;
            
//             count+=1;
//             a=a/10;
//         }
        
//         printf("Number of digits: %d\n", count);
//         if (count==10){
//             while(sum>0){ int rev=0;
//                 rev=sum%10+rev*10;
//                 sum=sum/10;
//             }
//             if (rev==sum){
//                 printf("palindrome");
//             }
//             else{printf("not");}
            
//         }
//         else{ printf("INVALID");}
//     }

// #include<stdio.h>
// void check (long int a);
// int main ()
// {
//     int t, i;
//     long n;
//     scanf("%d", &t);    
//     for (i=0;i<t;i=i+1)
//     {
//         scanf("%ld", &n);
//         check(n);
//     }
// }
// void check(long a)
// {
//     int i, c=0, rem;
//     int sum=0, revnum=0 ;
//     long num, num1, num2;
//     num=a;
//     int flag=1;
//     while(num!=0){
//       c=c+1;
//       rem=num%10;
//       if(rem==0)
//       {
//           flag=0;
//           break;
//       }
//       sum=sum+rem;
//       num=num/10;
//     }
//     if(c!=10)
//         flag=0;
//     if(flag==0)
//     {
//       printf("INVALID NUMBER\n");
//       return;
//     }
//      num2=sum;
//      while(num2!=0)
//      {
//          rem=num2%10;
//          revnum=(revnum*10)+rem;
//          num2=num2/10;
//      }
//     if(revnum==sum)
//     {
//         printf("%d", sum);
//         printf(", Number is Palindrome\n");
//     }
//     else
//     {
//       printf("%d", sum); 
//       printf(", Number is not a Palindrome\n");
//     }
// }

// #include <stdio.h>
// void check(long int a);
// int main(){
//     int t;
//     long n;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         scanf("%ld",&n);
//         check(n);
//     }
// }    
// void check(long a){
//     int rem,c=0,rev=0;
//     int sum=0;
//     long num,num1,num2;
//     int flag=1;
//     num=a;
//     while(num!=0){
//         c=c+1;
//         rem=num%10;
//         num=num/10;
//         sum=sum+rem;
     
//     }
//     // printf("%d\n",sum);
//     if (c!=10){
//         printf("invalid");
//      }
//     else{
//     num2=sum;
//     while(num2!=0){ 
//     rem=num2%10;
//     rev=rev*10+rem;
//     num2=num2/10;
//     }
//     if(rev==sum){
//         printf("%d",sum);
//         printf(" , it is palindrome");
//     }
//     else{ printf("%d",sum);
//         printf(" , is not palindrome");
// }}
//     }

#include <stdio.h>
#include <string.h>

struct portfolio{ 
    char name[10];
    int age;
    int rollno;
};
int main(){ struct portfolio p1;
   // struct portfolio p1={"pallavi",19,23784};
    strcpy(p1.name,"pal");
    p1.age=19;
    p1.rollno=832;
    printf("%s %d %d",p1.name,p1.age,p1.rollno);
    
}



