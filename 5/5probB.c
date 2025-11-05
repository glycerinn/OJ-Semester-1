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
    scanf("%lld", &T);

    for (int t = 0; t < T; t++) {
        char S[100005];
        scanf("%s", S);

        int len = strlen(S);
        int isPalin = 1;

        for(int j = 0; j < len/2; j++){
            if(S[j] != S[len - j - 1]){
                isPalin=0;
                break;
            }
        }

        if (isPalin == 1){
            printf("Case #%d: Yay, it's a palindrome\n", t + 1);
        }else{
            printf("Case #%d: Nah, it's not a palindrome\n", t + 1);
        }
    }

    return 0;
}
