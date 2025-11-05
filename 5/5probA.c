/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char S[100005];
        scanf("%s", S);

        int letters[26] = {0};
        int distinct = 0;

        for (int i = 0; S[i] != '\0'; i++) {
            int index = S[i] - 'a';
            if (letters[index] == 0) {
                letters[index] = 1;
                distinct++;
            }
        }

        printf("Case #%d: ", t);
        if (distinct % 2 == 0)
            printf("Yay\n");
        else
            printf("Ewwww\n");
    }

    return 0;
}
