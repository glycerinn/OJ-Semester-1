/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int A[T], B[T];
    (A[T] >= 2 && B[T] >= 2 && 100 >= A[T] && 100 >= B[T]);
    for(int i = 1; i <= T; i++){
        scanf("%d %d", &A[i], &B[i]);
    }
    
    for(int j = 1; j <= T; j++){
        int E=A[j], F=A[j], N;
        while(F >= B[j]){
            N = F/B[j];
            E += N;
            F = (F%B[j]) + N;
        }
        
        printf("Case #%d: %d\n", j, E);
    }
}
