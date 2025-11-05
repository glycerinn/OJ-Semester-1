/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int z, y, k;
    scanf("%d %d %d", &z, &y, &k);

    int result = -1;

    for (int t = 0; z + t <= k && y - t >= k; t++) {
        int p1 = z + t;
        int p2 = y - t;

        if (p1 == k && p2 == k) {
            result = t;  
        }
    }

    printf("%d\n", result);
}
