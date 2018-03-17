/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>
#include <float.h>

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
    printf("Zmienna char ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(c), CHAR_MIN, CHAR_MAX);
    printf("Zmienna signed char ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(schar1), SCHAR_MIN, SCHAR_MAX);
    printf("Zmienna unsigned char ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(unschar1), 0, UCHAR_MAX);
    printf("Zmienna int ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(n), INT_MIN, INT_MAX);
    printf("Zmienna short int ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(sint1), INT_MIN, INT_MAX);
    printf("Zmienna long int ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(lint1), LONG_MIN, LONG_MAX);
    printf("Zmienna signed int ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(ssint1), INT_MIN, INT_MAX);
    printf("Zmienna unsigned short ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(uns), 0, USHRT_MAX);
    printf("Zmienna unsigned int ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(unsint1), 0, UINT_MAX);
    printf("Zmienna float ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(f1), FLT_MIN, FLT_MAX);
    printf("Zmienna double ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(lf1), DBL_MIN, DBL_MAX);
    printf("Zmienna long double ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(ld), LDBL_MIN, LDBL_MAX);
    printf("Zmienna long long ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(ll), LLONG_MIN, LLONG_MAX);
    printf("Zmienna unsigned long ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(unl), ULONG_MAX);
    printf("Zmienna unsigned long long ma rozmiar: %dB, najmniejsza wartość to: %d, największa wartość to: %d\n", sizeof(unll), ULLONG_MAX);
    
    return 0;
}