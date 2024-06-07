#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// you can comment here

int age = 1;
char first_letter = 'a';
float pi = 3.13159;
double abigname99 = -3.7e-4;
short int e = 5;

int numbers[10] = {0}; //initializes all elements to 0

char str1[12] = "Hello";
char str2[12] = "World";
char str3[12];


int main() {
   
   strcpy(str3, str1);
   strcat(str1, str2);

   printf("%s\n", str3); // Output: Hello
   printf("%s\n", str1); // Output: HelloWorld
   
   return 0;
}






