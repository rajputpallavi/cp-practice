/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*#include <stdio.h>

int main()
{ int n;
    printf("enter the number ");
    scanf("%d",&n);
    //ternary operator
    (n%2==0)? printf("number is even"):printf("number is odd");

    return 0;
}
*/

/*#include <stdio.h>
int main(){
    int year;
    printf("enter the number: ");
    scanf("%d",&year);
    ((year%4==0)&&(year%100!=0))? printf("leap year"):printf("non-leap year");
    return 0;
}*/

/*
#include <stdio.h>
int main(){
    int n;
    printf("enter the age:");
    scanf("%d",&n);
    (n>=18)? printf("yippee!!you can vote!!"):printf("opps!! you can't vote!!");
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int n;//declare
    printf("enter a day from 1-7: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
         case 3:
        printf("Wednesday\n");
        break;
         case 4:
        printf("Thursday\n");
        break;
         case 5:
        printf("Friday\n");
        break;
         case 6:
        printf("Saturday\n");
        break;
         case 7:
        printf("Sunday\n");
        break;
        default:
        printf("invalid number");
        
    }
    return 0;
    
}
*/
/*

#include <stdio.h>

int main() {
    int month;

    // Input month from user
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    // Check and print total days based on the month
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Total days: 31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Total days: 30\n");
            break;
        case 2:
            printf("Total days: 28 or 29\n");
            break;
        default:
            printf("Invalid month\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    // Declare a character array to store the name
    char name[50];

    // Input: Prompt the user to enter their name using scanf
    printf("Enter your name: ");
    scanf("%s", name); // Read up to 49 characters until a newline is encountered

    // Output: Display the entered name
    printf("Hello, %s! Welcome to the program.\n", name);

    // End of the main function
    return 0;
}

//Write a program to add two numbers and display the sum
#include <stdio.h>
/*
int main() {
    // Declare variables
    int num1, num2, sum;

    // Input: Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Processing: Calculate the sum
    sum = num1 + num2;

    // Output: Display the result
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    // End of the main function
    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>
int main(){
    int r,area,circumference;
    float pi;
    pi=3.14;
    printf("Enter the value of radius: ");
    scanf("%d",&r);
    area=pi*r*r;
    circumference=2*pi*r;
    printf("Area of circle is %d \n",area);
    printf("circumference of circle is %d",circumference);
    return 0;
}

*/
/*
#include <stdio.h>
int main(){
    int a,b,add,sub,mul, di;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number:" );
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    di=a/b;
    printf("The sum of %d and %d is %d \n",a,b,add);
    printf("The subtraction of %d and %d is %d  \n",a,b,sub);
    printf("The multiplication of %d and %d is %d  \n",a,b,mul);
    printf("The division of %d and %d is %d  \n",a,b,di);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number:\na=");
    scanf("%d",&a);
    printf("Enter the second number:\nb=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping,\na=%d and b=%d",a,b);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number:\na=");
    scanf("%d",&a);
    printf("Enter the second number:\nb=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping,\na=%d and b=%d",a,b);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int u,a,t,v;
    printf("Enter the value of u=");
    scanf("%d",&u);
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of t=");
    scanf("%d",&t);
    v=u+a*t;
    printf("The value of v is %d",v);
    return 0;
    
}
*/
/*
#include <stdio.h>
int main(){
    int u,a,t,s;
    printf("Enter the value of u=");
    scanf("%d",&u);
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of t=");
    scanf("%d",&t);
    s=(u*t)+(a*t)/2;
    printf("The value of v is %d",s);
    return 0;
    
}
*/
/*
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,T;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    printf("Enter the value of c=");
    scanf("%d",&c);
    T=2*a+sqrt(b)+9*c;
    printf("The value of T is %d",T);
    return 0;
    
}
*/
/*
#include <stdio.h>
#include <math.h>
int main(){
    int b,p,H;
    printf("Enter the value of b=");
    scanf("%d",&b);
    printf("Enter the value of p=");
    scanf("%d",&p);
    H=sqrt((b*b)+(p*p));
    printf("The value of H is %d",H);
    return 0;
    
}
*/
/*
#include <stdio.h>
int main(){
    int a,b,c,greatest;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    
    greatest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The greatest number among %d, %d and %d is %d",a,b,c,greatest);
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a,b,c,greatest;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if ((a>b)&&(a>c)){
        greatest=a;
    }
    else if (b>c){
        greatest=b;
    }
    else{
        greatest=c;
}
printf("The greatest number among %d, %d, and %d is: %d\n", a, b, c, greatest);
return 0;
}
*/
/*
#include <stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is vowel.\n",ch);
        break;
    default:
    printf("%c is consonant.\n",ch);
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch((n>0)?1:((n<0)?-1:0)){
        case 1:
        printf("%d is a positive number",n);
        break;
        case -1:
        printf("%d is a negative number",n);
        break;
        default:
        printf("The number is Zero");
        
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int n,i,fact;
    fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        }
        printf("Factorial of %d is %d",n,fact);
        return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        if (i%2==0){
            printf("%d \n",i);
        }
        i++;
    }
    return 0;
}
*//*
#include <stdio.h>
int main(){
    int n,reversenum,remain;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        remain=n%10;
        reversenum=reversenum*10+remain;
        n=n/10;
    }
    printf("the reverse of the number is %d",reversenum);
    return 0;
}


#include < stdio.h >  
  
int main()  
{  
    int amount, temp;  
  
    printf("Enter amount\n");  
    scanf("%d", &amount);  
  
    temp   = amount / 100;  
    amount = amount - (temp*100);  
  
    printf("%d   x 100 = %d\n", temp, (temp*100));  
  
    temp   = amount / 50;  
    amount = amount - (temp*50);  
  
    printf("%d   x 50  = %d\n", temp, (temp*50));  
  
    temp   = amount / 10;  
    amount = amount - (temp*10);  
  
    printf("%d   x 10  = %d\n", temp, (temp*10));  
  
    temp   = amount / 5;  
    amount = amount - (temp*5);  
  
    printf("%d   x 5   = %d\n", temp, (temp*5));  
  
    temp   = amount / 2;  
    amount = amount - (temp*2);  
  
    printf("%d   x 2   = %d\n", temp, (temp*2));  
  
    temp   = amount / 1;  
    amount = amount - (temp*1);  
  
    printf("%d   x 1   = %d\n", temp, (temp*1));  
  
    return 0;  
}
*/
/*#include <stdio.h>
int main(){
    int n,i,Factorial=1,n1,isprime=1;
    printf("Enter your choice 1/2/3/4: ");
    scanf("%d",&n);
     switch(n){
        case 1:
        printf("Enter the number to find Factorial: ");
        scanf("%d",&n1);
        for(i=1;i<=n1;i++){
        Factorial*=i;
        }
        printf("Factorial of %d is %d\n",n1,Factorial);
        case 2:
        printf("Enter the number to check whether the number is prime or not:\n ");
        scanf("%d",&n1);
        for(i=2;i<=n1;i++){
        if (n1%i==0){ isprime=0;
        break;
        }
        if(isprime){printf("Prime number\n");
        } else{printf("Not Prime");}
        }  
        case 3:
        printf("Enter the number to check odd or even:");
        scanf("%d",&n1);
        if (n1%2==0)
        {
        printf("Number is even\n");
        }
        else
        {
        printf("Number is odd\n");
        }
        case 4:
        printf("exit");
        return 0;
}}
*/
/*
#include <stdio.h>
int main(){
    int n,i,num,reversenum=0;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        num=n%10;
        reversenum=reversenum*10+num;
        n=n/10;
        }
        printf("The number after reversing is %d",reversenum);
    
    return 0;
    
}
*/
#include <stdio.h>
int main(){
    int n,discount,res;
    printf("Enter the price for the quantity purchased: ");
    scanf("%d",&n);
    if (n>1000){
        printf("Discount of 10 percent is applied\n");
        discount=0.1*n;
        res=n-discount;
        printf("Your Total Payment is %d",res);
        }
    else{
        printf("Your Total payment is %d",n);
    }
    return 0;
}



