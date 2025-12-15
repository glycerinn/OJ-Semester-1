/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reverse(char *s, int index){
    if (index < 0) return;     
    putchar(s[index]);        
    reverse(s, index - 1);    
    
}

int main()
{
    int x;
    scanf("%d", &x);
    getchar();
    
    for(int i = 1; i<=x; i++){
        char S[1100];
        fgets(S, sizeof(S), stdin);

        int len = strlen(S);
        if (len > 0 && S[len - 1] == '\n') {
            S[len - 1] = '\0';
            len--;
        } 
        printf("Case #%d: ", i);
        reverse(S, len - 1);
        printf("\n");
    }
    
    return 0;
}