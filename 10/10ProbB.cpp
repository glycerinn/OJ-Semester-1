#include<stdio.h>

int binSearch(int B, int A[], int N){
	int l = 0, r = N-1, ans = -1;
	while(l <= r){
		int mid= (l+r)/2;
		if(A[mid] == B){
			ans = mid;
			r = mid - 1;
		}else if (A[mid] < B){
			l= mid + 1;
		}else{
			r = mid - 1;
		}
	}
	
	if(ans == -1) return -1;
	return ans + 1;
}

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	
	int A[N];
	for(int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
	
	for(int i = 0 ; i < M; i++){
		int B;
		scanf("%d", &B);
		
		int result = binSearch(B, A, N);
		
		printf("%d\n", result);
	}
	
	return 0;	
}
