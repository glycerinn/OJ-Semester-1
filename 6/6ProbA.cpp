/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

long long mults;

long long count(long long n){
    if(n > 0 && n%3==0){
        mults++;
    }
    
    if(n==0){
        return 1;
    }else if(n==1){
        return 2;
    }else if (n%5==0){
        return n * 2;
    }
    return count(n - 1) + n + count(n - 2) + n - 2;
}

int main()
{
    int x;
    scanf("%d", &x);
    
    for(int i = 1; i<=x; i++){
        long long N;
        scanf("%lld", &N);
        
        mults = 0;
        
        long long result = count(N);
        printf("Case #%d: %lld %lld\n", i, result, mults);
    }
    
    return 0;
}