#include<stdio.h>

int A[10000];
int result[10000];
int rcount;

void branches(int index, int n, int sum){
	if(index >= n) return;
	
	sum += A[index];
	
	int left = 2 * index + 1;
	int right= 2 * index + 2;
	
	if(left >= n && right >= n){
		result[rcount++] = sum;
		return;
	}
	
	branches(left, n, sum);
	branches(right, n, sum);
}

int main(){
	int T;
	scanf("%d", &T);
	
	for(int t = 1; t<=T; t++){
		int N;
		scanf("%d", &N);
		
		for(int i = 0; i < N; i++){
			scanf("%d", &A[i]);
		}
		
		rcount = 0;
		branches(0, N, 0);
		
		printf("Case #%d:\n", t);
        for (int i = 0; i < rcount; i++){
            printf("%d\n", result[i]);
    	}
	}
}
