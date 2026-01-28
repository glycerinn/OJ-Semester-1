#include<stdio.h>

void merge(int arr[], int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	
	for(i = 0; i < n1; i++){
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
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i < n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while(j < n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r){
	if(l < r){
		int m = (l + r)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main(){
	FILE *fp = fopen("testdataC.in", "r");
	int T;
	fscanf(fp, "%d", &T);
	
	for(int t = 1; t <= T; t++){
		int N, M;
		fscanf(fp, "%d %d", &N, &M);
		
		int total = N*M;
		int pixels[20000];
		int index = 0;
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				fscanf(fp, "%d", &pixels[index++]);
			}
		}
		
		mergeSort(pixels, 0, total-1);
		
		int K;
		if(total % 2 == 1){
			K = pixels[total/2];
		}else{
			int a = pixels[total/2 - 1];
			int b = pixels[total/2];
			K = (a + b + 1)/2;
		}
		
		
		printf("Case #%d: %d\n", t, K);
	}
	
	fclose(fp);
}
