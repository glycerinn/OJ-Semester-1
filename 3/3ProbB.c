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
    int A[T], B[T], C[T], D[T], E[T], F[T];
    for(int i = 1; i <= T; i++){
        scanf("%d %d %d %d %d %d", &A[i], &B[i], &C[i], &D[i], &E[i], &F[i]);
    }
    
    for(int i = 1; i <= T; i++){
        printf("Case #%d: ", i);
        for(int p = 0; p < A[i]; p++) printf("a");
        for(int l = 0; l < B[i]; l++) printf("s");
        for(int m = 0; m < C[i]; m++) printf("h");
        for(int n = 0; n < D[i]; n++) printf("i");
        for(int o = 0; o < E[i]; o++) printf("a");
        for(int j = 0; j < F[i]; j++) printf("p");
        printf("\n");
    }
}
