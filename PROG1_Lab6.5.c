#include <stdio.h>

int main ()
{
  char warunek = 't';
  do {
      scanf ("%c", &warunek);
      printf ("RKO\n");
  } while (warunek == 't');
  // warunek = getchar();
  char reakcja, oddychanie, AED;
  printf ("Czy reaguje?\n");
  scanf (" %c", &reakcja);
  printf ("%c", reakcja);
  printf ("Czy oddycha?\n");
  scanf (" %c", &oddychanie);
  printf ("%c", oddychanie);
  if ((reakcja == 't') && (oddychanie == 't')){
      printf ("Pozycja bezpieczna\n");
  }else if ((reakcja == 'n') && (oddychanie == 'n')){
      printf ("Wykonuj RKO!\n ");
      printf ("Czy posiadasz AED?\n");
      scanf (" %c", &AED);
      printf ("%c", AED);
      (AED == 'n');
      printf ("Kontynuuj wykonywanie RKO!\n");
      (AED == 't');
      printf ("Wykonuj polecenia korzystając z AED\n");
    }else


    return 0;
}
