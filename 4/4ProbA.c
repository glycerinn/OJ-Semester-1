/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    (A[N] < N);
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int B[N];
    for(int j = 0; j < N; j++){
        scanf("%d", &B[A[j]]);
    }
    for(int k = 0; k < N; k++){
        printf("%d", B[k]);
        if (k < N-1){
            printf(" ");
        }
    }
    printf("\n");
}
