//Concatenate Two Strings Without Using strcat()

#include<stdio.h>

void main()
{
  char str1[50],str2[50];
  static int i=0;
  int j=0;
  printf("\nEnter First String\n");
  gets(str1);
  printf("\nEnter Second String\n");
  gets(str2);
  while(str1[i]!='\0')
  {
    i++;
  }

  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
}