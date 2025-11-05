#include<stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char S[100005];
        scanf("%s", S);
        int i, j;
        int temp;

        for (i = 0, j = strlen(S) -1 ; i<j; i++, j--) {
            temp = S[i];
            S[i]= S[j];
            S[j] = temp;
            } 
            
        printf("Case #%d : %s\n", t, S);
        }       
}
