#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long A[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    int Q;
    scanf("%d", &Q);

    for (int q = 1; q <= Q; q++) {
        long long M;
        scanf("%lld", &M);

        long long currentSum = 0;
        int l = 0;
        int best = -1;

        for (int r = 0; r < N; r++) {
            currentSum += A[r];

            while (currentSum > M && l <= r) {
                currentSum -= A[l];
                l++;
            }

            if (currentSum <= M) {
                int length = r - l + 1;
                if (length > best)
                    best = length;
            }
        }

        printf("Case #%d: %d\n", q, best);
    }

    return 0;
}

