/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double temp;
    printf("W celu sprawdzenia stanu skupienia wody wpisz dowolną temperaturę wyrażoną w stopniach Celsjusza:\n");
    scanf("%lf", &temp);
    if (temp >= 0 && temp < 100) {
        printf("Woda w temperaturze %lf stopni Celsjusza jest w stanie ciekłym.\n", temp);
    } if (temp >= 100) {
        printf("Woda w temperaturze %lf stopni Celsjusza jest w stanie gazowym.\n", temp);
    } if (temp <= 0) { 
        printf("Woda w temperaturze %lf stopni Celsjusza jest w stanie stałym.\n", temp);
    }

    return 0;
}
