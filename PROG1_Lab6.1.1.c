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
      printf ("Wpisz temperaturę w stopniach Celsjusza:\n");
      scanf ("%lf", &kelvin);
      kelvin = celsjusz + 273;
      printf ("%lf Celsjusza to %lf Kelvina\n", celsjusz, kelvin);
      printf ("Czy chcesz dalej kontynuować?\n");
      scanf (" %c", &warunek);
      printf ("Wpisz temperaturę w Kelvinach:\n");
      scanf ("%lf", &rankine);
      rankine = kelvin * 9.0 / 5.0;
      printf ("%lf Kelvina to %lf Rankine\n", kelvin, rankine);
      printf ("Czy chcesz dalej kontynuować?\n");
      scanf (" %c", &warunek);
      //warunek = getchar();
    }
  return 0;
}
