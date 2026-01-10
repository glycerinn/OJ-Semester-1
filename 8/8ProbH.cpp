#include<stdio.h>

void merge(long long arr[], int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	long long L[n1], R[n2];
	
	for(i = 0; i< n1; i++){
		L[i] = arr[l + i];
	}
	for(j = 0; j < n2; j++){
		R[j] = arr[m + 1 + j];
	}
	
	i = 0;
	j = 0;
	k = l;
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			arr[k++] = L[i++];
		}else{
			arr[k++] = R[j++];
		}
	}
	
	while(i < n1){
		arr[k++] = L[i++];
	}
	
	while(j < n2){
		arr[k++] = R[j++];
	}
}

void mergeSort(long long arr[], int l, int r){
	if(l<r){
		int m = (l+r)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main(){
	int N;
	scanf("%d", &N);
	
	long long A[N];
	
	for(int i = 0; i<N; i++){
		scanf("%lld", &A[i]);
	}
	
	long long level;
	scanf("%lld", &level);
	
	mergeSort(A, 0, N-1);
	
	int hits = 0;
	for(int i = 0; i < N; i++){
		if(level >= A[i]){
			level -= A[i];
			hits++;
		}else{
			break;
		}
	}
	
	printf("%d\n", hits);
}
