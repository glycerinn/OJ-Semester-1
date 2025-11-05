/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long long n, m;
    scanf("%lld", &n);
    (n >= 1 && n <= 1000000);
    m = n*(2 * 100 + (n - 1) * 50)/2;
    printf("%lld\n", m);
}
