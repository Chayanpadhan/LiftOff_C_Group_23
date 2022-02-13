#include <stdio.h>
void main()
{
    char name[20];
    char branch[20];
    char hobbies[30];
    int reg;
    printf("Enter your name:\n");
    gets(name);
    printf("Enter your branch:\n");
    gets(branch);
    printf("Enter your hobbies:\n");
    gets(hobbies);
    printf("Enter your registration number:\n");
    scanf("%d", &reg);
}