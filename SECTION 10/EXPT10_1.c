/*Write a program using function to determine whether a year is a leap year or not*/
#include "stdio.h"
// function defination
void leap_or_not(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
     printf("%d is a leap year",year);
      else
        printf("%d is not a leap year",year);
}
void main()
{
    int year;
    printf("TO determine whether a year is leap or not,Enter the year :\n");
    scanf("%d",&year);
    leap_or_not(year); // function call
}