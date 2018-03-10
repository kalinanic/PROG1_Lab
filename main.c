/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char c = 115; // znak jako liczba całkowita
    signed char schar1 = 4; // znak jako liczba całkowita
    unsigned char unschar1 = 15; // znak jako liczba całkowita
    int n = 11; // liczba całkowita
    short int sint1 = 1; // cyfra
    long int lint1 = 1; // cyfra
    signed int ssint1 = 4; // liczba całkowita
    unsigned int unsint1 = 23; // liczba całkowita
    unsigned short uns = 59; // cyfra bez znaku
    float f1 = 5.9; // liczba rzeczywista
    double lf1 = 3.1412; // liczba rzeczywista
    long double ld = 9.3; // liczba rzeczywista
    long long ll = 50000; // długa liczba całkowita
    unsigned long unl = 2000; // długa liczba całkowita bez znaku
    unsigned long long unll = 600; // długa liczba całkowita bez znaku
    printf("Zmienna char ma rozmiar: %dB\n", sizeof(c));
    printf("Zmienna signed char ma rozmiar: %dB\n", sizeof(schar1));
    printf("Zmienna unsigned char ma rozmiar: %dB\n", sizeof(unschar1));
    printf("Zmienna int ma rozmiar: %dB\n", sizeof(n));
    printf("Zmienna short int ma rozmiar: %dB\n", sizeof(sint1));
    printf("Zmienna long int ma rozmiar: %dB\n", sizeof(lint1));
    printf("Zmienna signed int ma rozmiar: %dB\n", sizeof(ssint1));
    printf("Zmienna unsigned short ma rozmiar: %dB\n", sizeof(uns));
    printf("Zmienna unsigned int ma rozmiar: %dB\n", sizeof(unsint1));
    printf("Zmienna float ma rozmiar: %dB\n", sizeof(f1));
    printf("Zmienna double ma rozmiar: %dB\n", sizeof(lf1));
    printf("Zmienna long double ma rozmiar: %dB\n", sizeof(ld));
    printf("Zmienna long long ma rozmiar: %dB\n", sizeof(ll));
    printf("Zmienna unsigned long ma rozmiar: %dB\n", sizeof(unl));
    printf("Zmienna unsigned long long ma rozmiar: %dB\n", sizeof(unll));
    return 0;
}


