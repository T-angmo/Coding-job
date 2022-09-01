#include<stdio.h>
#include<string.h>
void add_word(char text[50], char verb[10]);
int main()
{
   char text[50] = "I";
   char verb[10];
   printf("Enter verb : ");
   scanf("%s", verb);
   add_word(text, verb);
   add_word(text, "You");
   printf("Your text  : %s", text);
}

void add_word(char text[50], char verb[10]) {
    strcat(text, " ");
    strcat(text, verb);
}