/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, sum1, sum2, sum3;
    scanf("%lf %lf %lf %lf\n", &num1, &num2, &num3, &num4);
    
    scanf("%lf %lf %lf %lf\n", &num5, &num6, &num7, &num8);
    scanf("%lf %lf %lf %lf", &num9, &num10, &num11, &num12);
 
    sum1 = 2*(num1/1)+4*(num2/2)+6*(num3/3)+4*(num4/4);
    sum2 = 2*(num5/1)+4*(num6/2)+6*(num7/3)+4*(num8/4);
    sum3 = 2*(num9/1)+4*(num10/2)+6*(num11/3)+4*(num12/4);
    
    printf("%.2lf\n%.2lf\n%.2lf\n", sum1, sum2, sum3);
    

}