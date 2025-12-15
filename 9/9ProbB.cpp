#include<stdio.h>

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main(){
	int TC;
	scanf("%d", &TC);
	
	for(int tc = 1; tc<=TC; tc++){
		int N, M;
		scanf("%d %d", &N, &M);
		int A[N];
		int maxcount = 0, mincount = 0;
		int hours, p;
		
		for(int j = 0; j < N; j++){
			scanf("%d", &A[j]);
		}
		
		mergeSort(A, 0, N-1);
		
		hours = 0;
		for (int i = 0; i < N; i++) {
            if (hours + A[i] > M)
                break;
            hours += A[i];
            maxcount++;
        }
		
		hours = 0;
		for (int i = N - 1; i >= 0; i--) {
            if (hours + A[i] > M)
                break;
            hours += A[i];
            mincount++;
        }
		
		printf("Case #%d: %d %d\n", tc, mincount, maxcount);

	}
}
