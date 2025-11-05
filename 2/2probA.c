/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, num6, sum1, sum2, sum3;
    scanf("%d + %d =\n", &num1, &num2);
    scanf("%d + %d =\n", &num3, &num4);
    scanf("%d + %d =", &num5, &num6);
    sum1 = num1 + num2;
    sum2 = num3 + num4;
    sum3 = num5 + num6;
    printf("%d\n%d\n%d\n", sum1, sum2, sum3);
}