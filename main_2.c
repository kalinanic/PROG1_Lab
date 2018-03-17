/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define KELVIN 273

int main()
{
double celsjusz, fahrenheit, kelvin, rankine;
printf("Wpisz temperaturę w stopniach Fahrenheita:\n"); 
scanf("%lf", &fahrenheit);
celsjusz = 5.0/9.0 * (fahrenheit-32);
printf("%lf Fahrenheita to %lf Celsjusza\n", fahrenheit, celsjusz);
printf("Wpisz temperaturę w stopniach Celsjusza:\n");
scanf("%lf", &kelvin);
kelvin = celsjusz + 273;
printf("%lf Celsjusza to %lf Kelvina\n", celsjusz, kelvin);
printf("Wpisz temperaturę w stopniach Kelvina:\n");
scanf("%lf", &rankine);
rankine = kelvin * 9.0/5.0;
printf("%lf Kelvina to %lf Rankine\n", kelvin, rankine);
    
    return 0;
    }
