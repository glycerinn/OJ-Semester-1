#include <stdio.h>

int abs(int x) {
    return x < 0 ? -x : x;
}

int main() {
    FILE *file = fopen("testdataF.in", "r");
    if (file == NULL) {
        return 1; 
    }

    int T;
    fscanf(file, "%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int N;
        fscanf(file, "%d", &N);

        int X[N];  

        long long area = 0;
        long long perimeter = 0;

        for (int i = 0; i < N; i++) {
            fscanf(file, "%d", &X[i]);
            area += 4 * X[i];
        }

      
        perimeter += 2 * N;  
		perimeter += 2 * N;        
        perimeter += 2 * X[0];       
        perimeter += 2 * X[N - 1];  

        for (int i = 1; i < N; i++) {
            perimeter += 2 * abs(X[i] - X[i - 1]);
        }

        printf("Case #%d: %lld %lld\n", tc, perimeter, area);
    }

    fclose(file);
    return 0;
}

