#include "main.h"

/**
* print_alphabet_x10 - Prints alphabets 10 times
*
*
*
* Return void
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
void print_alphabet_x10(void)
{
 int i;
 for (i = 0; i < 11 ; i++)
 {
  print_alphabet(); 
 }
}
