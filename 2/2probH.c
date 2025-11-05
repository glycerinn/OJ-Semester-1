/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, m, p;
    double n1, m2, p3, sum;
    scanf("%d %d %d", &n, &m, &p);
    n1 = n*(0.20);
    m2 = m * (0.30);
    p3 = p *(0.50);
    sum = n1 + m2 +p3;
    printf("%.2lf\n", sum);

    return 0;
}