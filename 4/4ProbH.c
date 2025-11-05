/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int size;
    int happy = 1;
    scanf("%d", &size);
    int guest[size];
    
    for(int i=0; i<size; i++){
        scanf("%d", &guest[i]);
    }
    
    for(int i=1; i<size; i++){
        int j = 0;
        for(j=0; j<i; j++){
            if(guest[i]==guest[j]){
                break;
            }
        }
        if(i == j){
            happy++;
        }
    }
    printf("%d\n", happy);
}
