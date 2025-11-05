/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int mygcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
	int T, i;
	scanf("%d", &T);
	int M[T];

	for (int t = 1; t <= T; t++) {
		int N;
		(N >= 2 && N <= 100);
		scanf("%d", &N);

		int x[N];
		for (i = 0; i < N; i++) {
			scanf("%d", &x[i]);
		}

		int r = x[0];
		int res = x[0];
        for (int a = 1; a < N; a++) {  
            res = mygcd(res, x[a]);  
        }
		M[t-1]=res;
	}

	for(int p = 1; p <= T; p++) {
		printf("Case #%d: %d\n", p, M[p-1]);
	}

}