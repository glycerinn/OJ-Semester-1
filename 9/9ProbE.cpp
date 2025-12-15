#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {  
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int binarySearch(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid + 1; 
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    int N;
    scanf("%d", &N);

    int heights[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }

    quickSort(heights, 0, N - 1);

    int Q;
    scanf("%d", &Q);

    int queries[Q];
    for (int i = 0; i < Q; i++) {
        scanf("%d", &queries[i]);
    }

    int results[Q];

    for (int i = 0; i < Q; i++) {
        results[i] = binarySearch(heights, N, queries[i]);
    }

    for (int i = 0; i < Q; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}

