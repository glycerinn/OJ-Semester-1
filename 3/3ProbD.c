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
	(T >= 1 && T <= 1000);
	scanf("%d", &T);
	int X[T], Y[T], Z[T], cash[T];
	for(int i = 1; i <= T; i++) {
		scanf("%d %d %d", &X[i], &Y[i], &Z[i]);
		cash[i] = (X[i] * Y[i])/100;
	}
	
	(X[T] >= 100 && 1000000 >= X[T] && X[T]%100 == 0);
	for(int j = 1; j <= T; j++) {
		printf("Case #%d: ", j);
		if (cash[j] > Z[j]) {
			printf("%d\n", Z[j]);
		} else {
			printf("%d\n", cash[j]);
		}
	}
}
