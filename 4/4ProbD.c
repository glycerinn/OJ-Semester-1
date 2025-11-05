/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);

        long long total = 0; 

        for (int i = 0; i < N; i++) {
            int max_weight = -1; 
            for (int j = 0; j < M; j++) {
                int w;
                scanf("%d", &w);
                if (w > max_weight) {
                    max_weight = w;
                }
            }
            total += max_weight;
        }

        printf("Case #%d: %lld\n", t, total);
    }

    return 0;
}
