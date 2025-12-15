/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int total(int n){
    if(n==0){
        return 0;
    }
    int a;
    scanf("%d", &a);
    return a + total(n-1);
}

int main()
{
    int x;
    scanf("%d", &x);
    
    for(int i = 1; i<=x; i++){
        int N;
        scanf("%d", &N);
        int sum = total(N);
        printf("Case #%d: %d\n", i, sum);
    }
    
    return 0;
}