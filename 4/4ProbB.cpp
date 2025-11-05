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

    for (int t = 0; t < T; t++) {
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);

        int friends[N][M];
        int rooms[M];
        int visits[Q];

        for (int i = 0; i < M; i++) {
            rooms[i] = 0;
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &friends[i][j]);
            }
        }

        for (int i = 0; i < Q; i++) {
            scanf("%d", &visits[i]);
        }

        for (int i = 0; i < Q; i++) {
            int f = visits[i] - 1; 
            for (int j = 0; j < M; j++) {
                if (friends[f][j] == 1) {
                    rooms[j] = 1 - rooms[j];
                }
            }
        }

        // output results
        printf("Case #%d:\n", t + 1);
        for (int j = 0; j < M; j++) {
            if (rooms[j] == 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}
