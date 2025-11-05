/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char A[20], B[20];
        scanf("%s %s", A, B);

        int lenA = strlen(A);
        int lenB = strlen(B);
        int maxLen = (lenA > lenB) ? lenA : lenB;

        char result[25];
        result[maxLen] = '\0'; // null terminate

        int i = lenA - 1;
        int j = lenB - 1;
        int k = maxLen - 1;

        // Add each digit without carry
        while (k >= 0) {
            int digitA = (i >= 0) ? A[i] - '0' : 0;
            int digitB = (j >= 0) ? B[j] - '0' : 0;
            int sum = (digitA + digitB) % 10;
            result[k] = sum + '0';

            i--; j--; k--;
        }

        // Remove leading zeros
        int start = 0;
        while (result[start] == '0' && result[start + 1] != '\0') {
            start++;
        }

        printf("Case #%d: %s\n", t, result + start);
    }

    return 0;
}

