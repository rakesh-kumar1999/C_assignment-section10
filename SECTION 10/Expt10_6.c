/*Using pointers, write a function that receives a character string and a character as 
arguments and deletes all occurrence of this character in the string. The function should return the 
corrected string with no holes.*/
#include"stdio.h"
#include"string.h"
char * delete_char(char * str,char ch)
{   
  int i,j,k;
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==ch)
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
  }
    return str;  
}
void main()
{
    char str[50],ch,*sptr;
    printf("\nEnter a string:");
    gets(str);
    printf("\nEnter the character to delete:");
    scanf("%c",&ch);
    sptr=delete_char(str,ch);
    printf("\nCorrected string with no holes:%s",sptr);
}

