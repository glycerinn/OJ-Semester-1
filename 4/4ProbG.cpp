/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    int A[N][N] = {};
    int isSame=0;
    
    for(int j = 0; j<N; j++){
            for(int k = 0; k<N; k++){
                scanf("%d", &A[j][k]);
                getchar();
            }
        }
    
    for(int j = 0; j<N; j++){
            for(int k = 0; k<N; k++){
                if(A[j][k] == A[j+1][k]){
                    isSame = 1;
                }else if(A[j][k] == A[j][k+1]){
                    isSame = 1;
                }
            }
        }
    
    if(isSame == 1){
        printf("Nay\n");
    }else if(isSame == 0){
        printf("Yay\n");
    }
}