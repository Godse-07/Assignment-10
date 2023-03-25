//3.	Reverse a string using recursions

# include <stdio.h>
  
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
  
int main()
{
   char a[] = "UEM_KOLKATA";
   reverse(a);
   return 0;
}
