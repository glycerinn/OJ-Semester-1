/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1;
    double num2, num3;
    scanf("%d %lf.00", &num1, &num2);
    num3 = num1 * (1+(num2/100)) * (1+(num2/100)) * (1+(num2/100));
    printf("%.2lf\n", num3);
    

}