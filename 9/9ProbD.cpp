#include <stdio.h>

void sort(long long arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                long long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);

    for(int t = 1; t <= T; t++){
        long long S[25];
        for(int i = 0; i < 25; i++){
            scanf("%lld", &S[i]);
        }

        sort(S, 25);

        long long M[5];
        M[0] = S[0] / 2;

        int cnt = 1;
		for(int i = 1; i < 25 && cnt < 5; i++){
    			if(S[i] != S[i - 1]){ 
        			M[cnt] = S[i] - M[0];
        			cnt++;
    		}
		}	

        printf("Case #%d: ", t);
        for(int i = 0; i < 5; i++){
            printf("%lld", M[i]);
            if(i < 4) printf(" ");
        }
        printf("\n");
    }

    return 0;
}

