#include<stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char S[100005];
        int N, K;
        int index, sum;

        scanf("%d %d", &N, &K);
        scanf("%s", &S);

        for(int i = 0; S[i] != '\0'; i++){
            index = S[i] - 'a';
            sum = (index + K) % 26;
            S[i] = 'a' + sum;
        }

        printf("Case #%d: %s\n", t, S);
    }       

    return 0;
}
