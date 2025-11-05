/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

***************************************************************** **************/
#include <stdio.h>

int main()
{
    double num1, num2, num3;
    scanf("%lf %lf", &num1, &num2);
    if(num2 < num1){
    num3 = num2*100/num1;
    }
    printf("%.4lf%%\n", num3);
    
    

}