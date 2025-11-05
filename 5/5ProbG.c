/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int N;
        scanf("%d", &N);
        char str[N + 5];
        scanf(" %[^\n]", str);
        
        int k = 0;
        for(int j = 0; str[j]!='\0'; j++){
            if(isalpha(str[j])){
                str[k++]=str[j];
            }
        }
        str[k] = '\0';
        printf("Case #%d: %s\n", i+ 1, str);
    }
}
