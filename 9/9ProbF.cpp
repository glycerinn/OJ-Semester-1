#include<stdio.h>

void merge(int arr[], int l, int m, int r){
	int i, j , k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	
	for(i = 0; i < n1; i++){
		L[i] = arr[l + i];
	}
	for(j = 0; j < n2; j++){
		R[j] = arr[m + j + 1];
	}
	
	i = 0;
	j = 0;
	k = l;
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i < n1){
		arr[k++] = L[i++];
	}
	
	while(j < n2){
		arr[k++] = R[j++];
	}
}

void mergeSort(int arr[], int l, int r){
	if(l<r){
		int m = (l + r)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		
		merge(arr, l, m, r);
	}
}

int main(){
	int N;
	scanf("%d", &N);
	
	int arr[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
	
	mergeSort(arr, 0, N - 1);
	
	int maxDiff = 0;
	
	for(int i= 1; i < N; i++){
		int diff = arr[i] - arr[i-1];
		if(diff > maxDiff){
			maxDiff = diff;
		}
	}
	
	int first = 1;
	for(int i= 1; i < N; i++){
		if(arr[i] - arr[i-1] == maxDiff){
			if(!first){
				printf(" ");
			}
			printf("%d %d", arr[i - 1], arr[i]);
			first = 0;
		}
	}
	printf("\n");
}
