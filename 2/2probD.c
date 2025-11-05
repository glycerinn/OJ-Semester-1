/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

***************************************************************** **************/
#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, mul, divi, mod;
    scanf("%d %d", &num1, &num2);
    sum = num1 +num2;
    sub = num1 - num2;
    mul = num1* num2;
    divi = num1/num2;
    mod= num1%num2;
    printf("%d\n%d\n%d\n%d\n%d\n", sum, sub, mul, divi, mod);
    
    

}