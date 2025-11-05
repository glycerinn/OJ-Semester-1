/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int M[T];

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int x[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &x[i]);
        }

        int min_diff;
        if (x[1] - x[0] < 0) {
            min_diff = -(x[1] - x[0]);
        } else {
            min_diff = x[1] - x[0];
        }

        for (int i = 1; i < N - 1; i++) {
            int diff = x[i + 1] - x[i];
            if (diff < 0) {
                diff = -diff;
            }
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
        M[t] = min_diff;
    }
    
    for(int t = 1; t <= T; t++){
        printf("Case #%d: %d\n", t, M[t]); 
    }

}
