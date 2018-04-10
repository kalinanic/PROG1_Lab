/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define KELVIN 273

int main ()
{
  char warunek = 'y';
  while (warunek == 'y'){
      double celsjusz, fahrenheit, kelvin, rankine;
      printf ("Wpisz temperaturę w stopniach Fahrenheita:\n");
      scanf ("%lf", &fahrenheit);
      celsjusz = 5.0 / 9.0 * (fahrenheit - 32);
      printf ("%lf Fahrenheita to %lf Celsjusza\n", fahrenheit, celsjusz);
      printf ("Czy chcesz dalej kontynuować?\n");
      scanf (" %c", &warunek);
      //warunek = getchar();
    }
  return 0;
}
