/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


// #include <stdio.h>
// #include <math.h>
// int calculatepass(int arr[],int size){
//     int sum=0;int sumT;int digit;int pass;
//     for(int i=0;i<size-1;i++){
//         sum+= *(arr+i+1)- *(arr+i);
//     }

//     if (sum<0){
//         sum=sum*-1;
//     }
//     sumT=sum;
//     while(sumT>0){
//         digit=sumT%10;
//         pass+=pow(digit,3);
//         sumT=sumT/10;
//         }
//     return pass;
// }

// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     int password=calculatepass(arr,5);
//     printf("%d",password);
//     return 0;
// }

// #include <stdio.h>
// int pal(int n){
//     int n1,rev=0,digit;
//     n1=n;
//     while(n1>0){
//         digit=n1%10;
//         rev=rev*10+digit;
//         n1=n1/10;
//         }
//         if (n==rev){
//             printf("Palindrome");
//         }
//         else{
//             printf("Not palindrome");
//         }
// }

// int main(){
//     int n1,n2,n3;
//     int max; 
//     int flag=1;
//     scanf("%d %d %d",&n1,&n2,&n3);
//     max=(n1>n2)?(n1>n3)?n1:n3:(n2>n3)?n2:n3;
//     printf("%d\n",max);
//     int result=pal(max);

// #include <stdio.h>
// int main(){
//     char name[50]; int i=0,k=0;
//     scanf("%[^\n]",name);
//     while(name[i]!='\0'){
//         if (name[i]==' '){
//             printf("%c. ",name[k]);
//             k=i+1;}
//         i++;
//     }
//     while(name[k]!='\0'){
//         printf("%c",name[k]);
//         k++;
//     }
// }

// #include <stdio.h>
// void encrypt(char msg[],int shift){
//     char ch;
//     for(int i=0;msg[i]!='\0';i++){
//         ch=msg[i];
//         if (ch>='a'&& ch<='z'){
//             ch+=shift;
        
//     if (ch>'z'){
//         ch=ch-'z'+'a'-1;
//     } msg[i]=ch;}
//      else if (ch>='A'&& ch<='Z'){
//             ch+=shift;
        
//     if (ch>'Z'){
//         ch=ch-'Z'+'A'-1;
//     }
//     msg[i]=ch;}}
//     printf("%s",msg);
    
// }

// int main(){
//     char msg[100];
//     int shift;
//     scanf("%[^\n]",msg);
//     scanf("%d",&shift);
//     encrypt(msg,shift);
    
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     char op;
//     double a,b;
//     printf("enter numbers");
//     scanf("%lf %lf",&a,&b);
    
    
//     printf("Enter operator");
//     scanf(" %c",&op);
    
//     switch(op){
//         case '+':
//         printf("%.2lf+%.2lf=%.2lf",a,b,a+b);
//         break;
//         case '-':
//          printf("%.2lf-%.2lf=%.2lf",a,b,a-b);
//         break;
//         case '*':
//         printf("%.2lf*%.2lf=%.2lf",a,b,a*b);
//         break;
//          case '/':
//          if (b!=0)
//         printf("%.2lf/%.2lf=%.2lf",a,b,a/b);
//         else printf("divided by zero");
//         break;
//         case '%':
//         if (b != 0) {
//         printf("%.2lf %%  %.2lf = %.2lf", a, b, fmod(a,b));
//             } else {
//         printf("Divide by zero.");
//             }
//         break;
//         case '^':
// printf("%.2lf ^ %.2lf = %.2lf", a, b, pow(a, b));
// break;
// default:
// printf("Invalid operator.");
//     }
// return 0;
        
    
    
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
// char operat;
// double num1, num2;

//     // Use %lf to read double values
// scanf("%lf %lf", &num1, &num2);
// scanf(" %c", &operat);

// switch (operat) {
// case '+':
// printf("%.2lf + %.2lf = %.2lf ", num1, num2, num1 + num2);
// break;
// case '-':
// printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
// break;
// case '*':
// printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
// break;
// case '/':
// if (num2 != 0) {
// printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
//             } else {
// printf("Divide by zero.");
// return 0;
//             }
// break;
// case '%':
// if (num2 != 0) {
// printf("%.2lf %% %.2lf = %.2lf", num1, num2, fmod(num1, num2));
//             } else {
// printf("Divide by zero.");
//             }
// break;
// case '^':
// printf("%.2lf ^ %.2lf = %.2lf", num1, num2, pow(num1, num2));
// break;
// default:
// printf("Invalid operator.");
//     }
// return 0;
// }

// #include <stdio.h>
// int main(){
//     float n;float a;
//     scanf("%f",&n);
//     if (n<=100){
//     a=n*2;}
//     else if (n<=300)
//   { a=100*2.0+(n-100)*3;}
//     else if(n<=500)
//     {a=100*2+200*3+(n-300)*4;}
//     else {a=100*2+200*3+200*4+(n-500)*5;}
    
//     if (a>2500)
//     {a+=0.1*a;}
    
//     if (a<100)
//     {a=100;}
    
//     printf("%.2f",a);
//     return 0;
    
    
// }

// #include <stdio.h>
// int main(){
//     int m,mm; int passing;
//     scanf("%d",&m);
//     scanf("%d",&mm);
//      passing= (m*100)/mm;
//      if (passing <40){
//          printf("Fail");
//      }
//      else if (passing >90){
//          printf("excellent");
//      }
//      else if (passing <=90 && passing >=75){
//          printf("good");
//      }
//      else if (passing>=50 && passing <=74){
//          printf("average");
//      }
//      else if (passing <50 && passing >=40){
//          printf("below average");
//      }
// }

// #include <stdio.h>
// int main(){
//     int n,sms;
//     float charges=0,smsch=0,supercharge;
//     float bill;float totalbill;
//     scanf("%d",&n);
//     scanf("%d",&sms);
//   if (n >50 && n <=100){
//             charges+=(n-50)*0.80;
//         }
//         else if (n>100 && n<=200){
//             charges+=50*0.80+(n-100)*0.50;
//         }
//         else if(n>200){
//             charges+=50*0.80+100*0.50+(n-200)*0.10;
//         }
    
//     if (sms>100) {
//          smsch+=(sms-100)*0.50;
//      }
//     bill=100+charges+smsch;
//     supercharge =0.10*bill;
//     totalbill=supercharge+bill;
//     printf("%.2f",totalbill);
// }

// #include <stdio.h>
// int main(){
//     char arr[10]; int ca=0,cb=0,cc=0;
//     char result[10];
//     scanf("%s",arr);
//     for(int i=0;i<10;i++){
//         if (arr[i]=='a'){
//             ca++;
//         }
//         if (arr[i]=='b'){
//             cb++;
//         }
//         if (arr[i]=='c'){
//             cc++;
//         }
//     }
//     int i=0;
//     while(ca!=0){
//         result[i++]='a';
//         ca--;
//     }
    
    
//     while(cb!=0){
//         result[i++]='b';
//         cb--;
//     }
//      while(cc!=0){
//          result[i++]='c';
//          cc--;
//      }
//      printf("%s",result);
    
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(){
//     char s[100];int v=0,c=0,x=0;int i=0;
//     fgets(s,100,stdin);
//     for(int i=0;s[i]!='\0';i++){
//         if (s[i]>='A' && s[i]<='Z')
//         s[i]+=32;
//     }
//     while (s[i]!='\0'){
//         if (s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
//             v++;
//         }
//       else if (s[i]==' '){
//           x++;
//       }
//       else if (s[i]>'a' && s[i]<='z'){
//           c++;
//       }
//       i++;
//     }
//     printf("%d",v);
//      printf("%d",c);
    
// }


// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++){
//          scanf("%d",&arr[i]);
//      }
// int firstmax=0,secondmax=0;
// for(int i=0;i<n;i++){
//     if (arr[i]>firstmax){
//         secondmax=firstmax;
//         firstmax=arr[i];
//     }
//     else if (arr[i]<firstmax && arr[i]>secondmax){
//         secondmax=arr[i];}
// }
// //printf("%d",firstmax);
// //printf("%d",secondmax);

// int firstmin=100,secondmin=100;
// for(int i=0;arr[i]!='\0';i++){
//     if (arr[i]<firstmin){
//         secondmin=firstmin;
//         firstmin=arr[i];
//     }
//     else if(arr[i]>firstmin && arr[i]<secondmin){
//         secondmin=arr[i];
//     }
// }
// //printf("%d",firstmin);
// //printf("%d",secondmin);
// printf("%d",secondmax-secondmin);
    
// }

// #include <stdio.h>
// int max(int x,int y){
//     if(x>y)
//     return x;
//     return y;
// }
// int min(int x,int y){
//     if(x>y)
//     return y;
//     return x;
// }
// int maxwater(int arr[],int n){ int result=0;
//     for(int i=0;i<n;i++){
//         int left=arr[i];
//         for(int j=0;j<i;j++){
//             left=max(left,arr[j]);
//         }
//         int right=arr[i];
//         for(int j=i+1;j<n;j++){
//             right =max(right,arr[j]);
//         }
//         result=result+(min(left,right)-arr[i]);
//     }
//     return result;
    
    
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr [n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
    
//     printf("%d",maxwater(arr,n));
// }

// #include <stdio.h>
// int main(){
//     int n; int t1=0,t2=1,next;
//     scanf("%d",&n);
//     for(int i=1;i<n;i++){
//         printf("%d",t1);
//         next=t1+t2;
//         t1=t2;
//         t2=next;
       
//     }
// }

// #include <stdio.h>
// int fact(int n){
//     if (n==0||n==1){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }
// int main(){
//     int n;
//      scanf("%d",&n);
//      printf("%d",fact(n));
// }

