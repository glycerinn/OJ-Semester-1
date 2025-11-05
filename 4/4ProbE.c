/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define int long long

signed main() {
    int T;
    scanf("%lld", &T);
    getchar();

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%lld", &N); getchar();
        int arr[N];
        for (int j = 0; j<N; j++){
            scanf("%lld", &arr[j]);
        }

        int cool =0;
        for(int k = 0; k < N; k++){
            int found = 0;
            for(int x = 0; x < N && found==0; x++){
                for(int y = x + 1; y < N && found==0; y++){
                    if(x!=k && y!=k){
                        if(arr[x]+arr[y] == arr[k]){
                            found = 1;
                            cool++;
                        }
                    }
                }
            }
        }

        printf("Case #%d: %lld\n", t+1, cool);
    }

    return 0;
}
