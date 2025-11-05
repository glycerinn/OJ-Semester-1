#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int Q;
        char S[1005];
        scanf("%d %s", &Q, S);

        for (int i = 0; i < Q; i++) {
            int L, R;
            scanf("%d %d", &L, &R);
            L--;
            R--;

            while (L < R) {
                char temp = S[L];
                S[L] = S[R];
                S[R] = temp;
                L++;
                R--;
            }
        }

        printf("Case #%d: %s\n", t, S);
    }

    return 0;
}
