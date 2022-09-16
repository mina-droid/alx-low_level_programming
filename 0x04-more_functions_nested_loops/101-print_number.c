int  print_last_digit(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n / 10)
{
print_last_digit(n / 10);
}
_putchar(n % 10 + '0');
return (0);
}
