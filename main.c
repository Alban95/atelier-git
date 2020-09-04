int my_putchar(char c)
{
  return write(1, &c, sizeof(c));
}

int my_putstr(char *str)
{
  while(*str) my_putchar(*str++);
 
  return 0;
}

int main()
{
  my_putstr("coucou l'atelier git\n");
  return 0;
}
