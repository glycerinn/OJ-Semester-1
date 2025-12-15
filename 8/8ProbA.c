/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    int N, T;
    char Id[20005][11];
    char name[20005][101];
    
    fp = fopen("testdata.in", "r");
    
    fscanf(fp, "%d", &N);
    for(int i = 0; i < N; i++){
        fscanf(fp, "%s %s", Id[i], name[i]);
    }
    
    fscanf(fp, "%d", &T);
    for(int i = 1; i <= T; i++){
        char S[11]; 
        fscanf(fp, "%s", S);
        
        int found = -1;
        
        // search for ID
        for(int j = 0; j < N; j++){
            if(strcmp(Id[j], S) == 0){
                found = j;
                break;
            }
        }
        
        if (found != -1){
            printf("Case #%d: %s\n", i, name[found]);
        } else {
            printf("Case #%d: N/A\n", i);
        }
    }
    
    fclose(fp);
    return 0;
}
