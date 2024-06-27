
//1)Write a Program to show the use to input (Scanf)/output (Printf) statements 
//and block structure of C-program by highlighting the features of "stdio.h".
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



