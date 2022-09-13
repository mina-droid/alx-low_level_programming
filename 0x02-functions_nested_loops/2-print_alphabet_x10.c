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
}
void print_alphabet_x10(void)
{
 int i;
 for (i = 1; i <= 10 ; i++)
 {
  print_alphabet();
  _putchar('\n');
 }
}
