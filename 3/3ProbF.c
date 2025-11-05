/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
   int T; 
   (T >= 1 && 10 >= T);
   scanf("%d", &T);
   int X[T];
   (X[T] >= 2 && 100 >= X[T]);
   for(int i = 0; i < T; i++){
       scanf("%d", &X[i]);
   }
   
   for(int j = 0; j < T; j++){
       int n = X[j];
       for (int i = 0; i < n; i++) {
            for (int k = 0; k < (n-i) -1 ; k++) {
            printf(" ");
            }
            for (int p = 0; p < 2 * i + 1; p++) {
            printf("*");
            }
            printf("\n");
        }
   }
}
