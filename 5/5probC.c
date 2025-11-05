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
        char msg[10005];
        scanf("%s", msg);

        char encrypted[10005];
        char key[10005];

        for (int i = 0; msg[i] != '\0'; i++) {
            char c = msg[i];
            int dist = 0;
            char vowel;


            if (c >= 'A' && c <= 'D') {
                vowel = 'A';
                dist = c - 'A';
            } 
            else if (c >= 'E' && c <= 'H') {
                vowel = 'E';
                dist = c - 'E';
            } 
            else if (c >= 'I' && c <= 'N') {
                vowel = 'I';
                dist = c - 'I';
            } 
            else if (c >= 'O' && c <= 'T') {
                vowel = 'O';
                dist = c - 'O';
            } 
            else if (c >= 'U' && c <= 'Z') {
                vowel = 'U';
                dist = c - 'U';
            } 
            else {
                vowel = c;
                dist = 0;
            }

            encrypted[i] = vowel;
            key[i] = dist + '0'; 
        }

        encrypted[strlen(msg)] = '\0';
        key[strlen(msg)] = '\0';

        printf("Case #%d:\n", t);
        printf("%s\n", encrypted);
        printf("%s\n", key);
    }

    return 0;
}
