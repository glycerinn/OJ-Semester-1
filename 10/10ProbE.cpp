#include <stdio.h>

long long sumSquares(long long n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

long long binSearch(long long M) {
    long long low = 1, high = 2000000;
    long long ans = high;

    while (low <= high) {
        long long mid = (low + high) / 2;

        if (sumSquares(mid) >= M) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        long long M;
        scanf("%lld", &M);

		int ans = binSearch(M);

        printf("Case #%d: %lld\n", tc, ans);
    }

    return 0;
}

