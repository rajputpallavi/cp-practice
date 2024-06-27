/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// int main()
// { char s[100];
//  scanf("%s",s);
//  for(int i=0;s[i]!='\0';i++){
//      if(s[i]>='A'&& s[i]<='Z'){
//          s[i]=s[i]-'A'+'a';
//          //s[i]+=32
//      }
//     //  else if(s[i]<='a' && s[i]<='z'){
//          else{s[i]=s[i]+'A'-'a';
//          //s[i]-=32
//      }
//  }
//  printf("%s",s);
// }


// int main(){ int arr[5];
// int search;int flag;
// for(int i=0;i<5;i++){
//     scanf("%d",&arr[i]);
//     }
    
// for(int i=0;i<5;i++){
//     printf("%d",arr[i]);
//     }
//     printf("\n");
// scanf("%d",&search);
// for(int i=0;i<5;i++){
//   if  (arr[i]==search){
//       printf("%d",i);
//       flag=0;
//       break;
//       }
// flag=1;
// }
// if (flag==1){
//     printf("-1");
// }}
#include <stdio.h>
#include <ctype.h>  // For tolower() and isalpha() functions
#include <stdbool.h>  // For boolean data type

int main() {
    char str[100];  // Array to store the string (adjust size as needed)
    int i;
    bool vowels[5] = {false}, consonants[26] = {false};

   
    scanf("%s",str);

    // Convert all characters to lowercase for case-insensitive counting
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Loop through each character and update flags
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (isalpha(ch)) {
            if (ch == 'a') {
                vowels[0] = true;
            } else if (ch == 'e') {
                vowels[1] = true;
            } else if (ch == 'i') {
                vowels[2] = true;
            } else if (ch == 'o') {
                vowels[3]  = true;
            } else if (ch == 'u') {
                vowels[4] = true;
            } else {
                consonants[ch - 'a'] = true;  // Map to consonant index (a=0, b=1, ...)
            }
        }
    }

    // Count unique vowels
    int unique_vowels = 0;
    for (i = 0; i < 5; i++) {
        if (vowels[i]) {
            unique_vowels++;
        }
    }

    // Count unique consonants
    int unique_consonants = 0;
    for (i = 0; i < 26; i++) {
        if (consonants[i]) {
            unique_consonants++;
        }
    }

    printf("Unique Vowels: %d\n", unique_vowels);
    printf("Unique Consonants: %d\n", unique_consonants);

    return 0;
}