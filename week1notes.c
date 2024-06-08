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
struct NBA {
   char city_name[24];
   char team_name[24];
   int year_founded;
};

// declaring multiple struct variables in one line
struct NBA Dallas, Toronto, Charlotte, Memphis;

// declaring multiple struct variables at the same time we define the struct
struct NFL {
   char city_name[24];
   char team_name[24];
   int year_founded;
} GB, KC, NE;

int main() {
   
   // strcpy(str3, str1);
   // strcat(str1, str2);

   GB.year_founded = 1919;
   strcpy(GB.city_name, "Green Bay, Wisconsin");
   strcpy(GB.team_name, "Packers");

   KC.year_founded = 1963;
   strcpy(KC.city_name, "Kansas City, Missouri");
   strcpy(KC.team_name, "Chiefs");

   NE.year_founded = 1971;
   strcpy(NE.city_name, "Foxborough, Massachusetts");
   strcpy(NE.team_name, "Patriots");

   printf("\n");

   printf("The most historic team in the NFL are located in %s. The %s were founded in %d. \n", GB.city_name, GB.team_name, GB.year_founded);

   printf("The current dynasty in the NFL call %s home. The Kansas City %s were founded in %d.\n", KC.city_name, KC.team_name, KC.year_founded);

   printf("The previous NFL dynasty were the New England %s. Based in %s, the team was founded in %d. \n", NE.team_name, NE.city_name, NE.year_founded);

   printf("\n");

   return 0;
}






