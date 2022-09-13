#include "main.h"

/**
* jack_bauer - jack_bauer minutes song
*
* Parameters: none
*
*
* Return: void
*/

void jack_bauer(void)
{
int first_nums;
int second_nums;
for (first_nums = 0; first_nums < 24 ; first_nums++)
{
for (second_nums = 0 ; second_nums < 60; second_nums++)
{
_putchar (first_nums / 10 + '0');
_putchar (first_nums % 10 + '0');
_putchar (':');
_putchar (second_nums / 10 + '0');
_putchar (second_nums % 10 + '0');
_putchar('\n');
}
}

}
