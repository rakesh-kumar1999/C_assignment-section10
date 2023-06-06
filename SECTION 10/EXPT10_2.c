/*Write a program using function to take a string as input and then convert all lowercase
characters to its uppercase equivalent*/
#include "stdio.h"
// #include"string.h"
void to_uppercase(char str[]) // function defination
{
    // strupr(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)//if(str[i]>='a'&&str[i]<='z')
            str[i] = str[i] - 32;
    }
    puts(str);
}
void main()
{
    char str[25];
    printf("Enter a string\n");
    gets(str);
    printf("String in uppercase is:\n");
    to_uppercase(str); // function call
}