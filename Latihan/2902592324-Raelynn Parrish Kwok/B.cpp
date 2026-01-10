#include<stdio.h>
#include<string.h>

void bubbleSort(char arr[][101], int size){
	char temp[101];
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(strcmp(arr[j], arr[j+1]) > 0){
				strcpy(temp, arr[j+1]);
				strcpy(arr[j+1], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
}

int main(){
	int T;
	scanf("%d", &T);
	int N, K;
	
	for(int tc = 0; tc < T; tc++){
		scanf("%d %d", &N, &K);
		
		char A[N][101];
		
		for(int n = 0; n<N; n++){
			scanf("%s", A[n]);
		}
		bubbleSort(A, N);
		
		char nama[101];

		strcpy(nama, A[K-1]);

		printf("Case #%d: %s\n", tc+1, nama);
	}
	return 0;
}
