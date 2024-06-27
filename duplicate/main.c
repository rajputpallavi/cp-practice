/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// #include <stdio.h>
// int main()
// {
//   char s[100];
//   scanf("%s",s);
//   for(int i=0;s[i]!='\0';i++){ 
//       for(int j=i+1;s[j]!='\0'; ){
//           if(s[i]==s[j]){
//               for(int k=j;s[k]!='\0';k++){
//                   s[k]=s[k+1];}
//               }
//           else{j++;}
//       }
//       }
          
//   printf("%s",s);
// }



#include <stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        for(int j=i+1;s[j]!='\0';){
            if (s[i]==s[j]){
                for(int k=j;s[k]!='\0';k++){
                    s[k]=s[k+1];}}
                else{j++; }
        }
    }
    printf("%s",s);
}

// #include <stdio.h>
// #include <string.h>
// struct student{
//     char name[50];
//     int marks[4];
//     float average;
//     };
//  int main(){
//      struct student s[3];
//      int i,j; 
//         for(int i=0;i<3;i++){
//             scanf("%s",s[i].name); //entering name of students
//             int sum=0;
//             for(int j=0;j<4;j++){
//             scanf("%d",&s[i].marks[j]); //entering marks
//             sum+=s[i].marks[j];         //sum up of the marks entered
//             }
//             s[i].average=sum/4.0;       //average of each student marks
//           // printf("sum=%d",sum);
//           // printf("average= %.2f",s[i].average);
//             }
//             float max=0.0;char topper[50];
//             for(int i=0;i<3;i++){
//                 if (s[i].average>max){
//                     max=s[i].average;
//                     strcpy(topper,s[i].name);
//                 }
//             }
//             printf("%s got the maximum marks of average= %.2f",topper,max);
// }
//  #include <stdio.h>   
// int main(){
//     int a1[3][3];
//     int a2[3][3];
//     int result[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a1[i][j]);
//         }
//     }
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a2[i][j]);
//         }
//     }
//     printf("the matrix A:\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",a1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The matrix B:\n");
    
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",a2[i][j]);
//         }
//         printf("\n");
//     }
//     printf("A+B\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",a1[i][j]+a2[i][j]);
//         }
//         printf("\n");
//     }
    
//     printf("A*B=\n");
//     for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//      result[i][j]=0;
//     for(int k=0;k<3;k++){
//         result[i][j]+=a1[i][k]*a2[k][j];
//     }}}
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",result[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Transpose of A:\n");
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",a1[j][i]);
//         }
//         printf("\n");
//     }
    
// }


