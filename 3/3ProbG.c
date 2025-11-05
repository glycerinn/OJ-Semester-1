/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	int A[T], B[T];
	for(int i = 1; i <= T; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}

	for(int j = 1; j <= T; j++) {
		int M = B[j]/2;
		int N = (A[j]/2) - (B[j]/2);
		int S;
		if (M < N) {
			S = M;
		} else {
			S = N;
		}
		printf("Case #%d: %d\n", j, S);
	}
}
