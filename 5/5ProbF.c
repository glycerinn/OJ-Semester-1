#include<stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char S[100005];
        
        int M;
        
        scanf("%s", S);
        scanf("%d", &M);

        char map[26];
        for (int i = 0; i < 26; i++) {
            map[i] = 'a' + i;  
        }

        for(int i = 0; i < M; i++){
            char ori, change;
            scanf(" %c %c", &ori, &change);
            for(int k = 0; k < 26; k++){
                if(map[k] == ori){
                    map[k] = change;
                }
            }
        }

        for(int j = 0 ; S[j]!='\0'; j++){
            S[j] = map[S[j] - 'a'];
        }

        printf("Case #%d: %s\n", t, S);
    }       

    return 0;
}
