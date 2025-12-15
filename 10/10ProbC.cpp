#include<stdio.h>

long long sum[1000005];

int binSearch(long long M, int N){
	int l = 1, r = N, ans = -1;
	while(l<=r){
		int mid= (l+r)/2;
		if(sum[mid] <= M){
			ans = mid;
			l= mid + 1;
		}else{
			r = mid - 1;
		}
	}
	return ans;
}

int main(){
	int N;
	scanf("%d", &N);
	
	long long A;
	sum[0]=0;
	for(int i = 1; i <=N; i++){
		scanf("%lld", &A);
		sum[i] = sum[i-1] + A;
	}
	
	int Q;
	scanf("%d", &Q);
	for(int i = 1 ; i <= Q; i++){
		long long M;
		scanf("%lld", &M);
		
		int result = binSearch(M, N);
		
		printf("Case #%d: %d\n", i, result);
	}
	
	return 0;	
}
