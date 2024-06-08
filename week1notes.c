#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int age = 1;
char first_letter = 'a';
float pi = 3.13159;
double abigname99 = -3.7e-4;
short int e = 5;

int numbers[10] = {0}; //initializes all elements to 0

// creating char arrays
char str1[12] = "Hello";
char str2[12] = "World";
char str3[12];

// creating a struct data type for tax information
struct tax_info{
   int sin[9];
   int date_of_birth[8];
   int date_of_death[8];
   int marital_status;
};

// declaring multiple struct variables each on their own line
struct tax_info Nathan;
struct tax_info Jimmy;

// declaring a struct data type for NBA teams
struct NBA_Teams {
   char city_name[24];
   char team_name[24];
   int year_founded[5]
};

// declaring multiple struct variables in one line
struct NBA_Teams Dallas, Toronto, Charlotte, Memphis;

int main() {
   
   strcpy(str3, str1);
   strcat(str1, str2);

   printf("%s\n", str3); // Output: Hello
   printf("%s\n", str1); // Output: HelloWorld
   
   return 0;
}






