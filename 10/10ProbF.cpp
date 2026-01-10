#include<stdio.h>

int binSearch(long long prefix[], int N, long long target) {
    int low = 0, high = N-1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (prefix[mid] <= target) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main(){
	int T;
	scanf("%d", &T);
	
	for(int i = 1; i <= T; i++){
		int N;
		long long M;
		scanf("%d %lld", &N, &M);
		
		long long A[N];
		long long prefix[N];
		
		for(int j= 0; j < N; j++){
			scanf("%lld", &A[j]);
			if(j==0){
				prefix[j] = A[j];
			}else{
				prefix[j] = prefix[j-1] + A[j];
			}
		}
		
		int best = -1;
		
		for(int p = 0; p < N; p++){
			long long target;
			if(p == 0){
				target = M;
			}else{
				target = M + prefix[p-1];
			}
			
			int r = binSearch(prefix, N, target);
			
			if(r>=p){
				int length = r - p + 1;
				if(length > best){
					best = length;
				}
			}
		}
		printf("Case #%d: %d\n", i, best);
	}
		
}

