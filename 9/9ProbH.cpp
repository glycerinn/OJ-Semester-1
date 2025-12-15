#include <stdio.h>

void merge(int arr[], int temp[], int l, int m, int r) {
    int i = l;
    int j = m + 1;
    int k = l;

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= m)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (i = l; i <= r; i++)
        arr[i] = temp[i];
}

void mergeSort(int arr[], int temp[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, temp, l, m);
        mergeSort(arr, temp, m + 1, r);
        merge(arr, temp, l, m, r);
    }
}

long long countPairs(int v[], int n, int M) {
    long long count = 0;
    int left = 0, right = n - 1;

    while (left < right) {
        if (v[left] + v[right] >= M) {
            count += (right - left);
            right--;
        } else {
            left++;
        }
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    int odd[N];
    int even[N];
    int temp[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0)
            even[evenCount++] = A[i];
        else
            odd[oddCount++] = A[i];
    }

    if (oddCount > 0)
        mergeSort(odd, temp, 0, oddCount - 1);
    if (evenCount > 0)
        mergeSort(even, temp, 0, evenCount - 1);

    int Q, M;
    scanf("%d", &Q);

    for (int q = 1; q <= Q; q++) {
        scanf("%d", &M);

        long long oddPairs = countPairs(odd, oddCount, M);
        long long evenPairs = countPairs(even, evenCount, M);

        printf("Case #%d: %lld %lld\n", q, oddPairs, evenPairs);
    }

    return 0;
}

