//12.	 C Program to Replace Lowercase Characters by Uppercase & Vice-Versa

 
#include <stdio.h>
#include <ctype.h>
 
void main()
{
    char sentence[100];
    int count, ch, i;
 
    printf("Enter a sentence \n");
    for (i = 0;(sentence[i] = getchar()) != '\n'; i++)
    {
        ;
    }
    sentence[i] = '\0';
    count = i;
    printf("The given sentence is   : %s", sentence);
    printf("\n Case changed sentence is: ");
    for (i = 0; i < count; i++)
    {
        ch = islower(sentence[i])? toupper(sentence[i]) :
tolower(sentence[i]);
        putchar(ch);
    }
}