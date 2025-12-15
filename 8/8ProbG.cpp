#include <stdio.h>

int main() {
    FILE *fp = fopen("testdata.in", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    int T;
    fscanf(fp, "%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int n, A, B;
        fscanf(fp, "%d %d %d", &n, &A, &B);

        char N[n + 1];
        fscanf(fp, "%s", N); 

        int count = 0;
		int light = 0;
		
		for (int i = 0; i < n; i++) {
		    if (N[i] == '1') {
		        count++;
		    } else {
		        if (count >= A && count <= B) {
		            light++;
		        }
		        count = 0;
		    }
		}
		
		if (count >= A && count <= B) {
		    light++;
		}
        
        printf("Case #%d: %d\n", tc, light);
    	}
    	
	fclose(fp);
    return 0;
}


    

