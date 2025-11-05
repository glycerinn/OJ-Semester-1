/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        getchar();
        int mat1[n][n] = {};
        int mat2[n][n] = {};
        int mat3[n][n] = {};
        int matres[n][n] = {};
        int matres2[n][n] = {};
        
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                scanf("%d", &mat1[j][k]);
                getchar();
            }
        }
        
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                scanf("%d", &mat2[j][k]);
                getchar();
            }
        }
        
        
        
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                scanf("%d", &mat3[j][k]);
                getchar();
            }
        }
        
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                matres[j][k]=0;
                for(int l = 0; l<n; l++){
                    matres[j][k] +=mat1[j][l] * mat2[l][k];
                }
            }
        }
        
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                matres2[j][k]=0;
                for(int l = 0; l<n; l++){
                    matres2[j][k] +=
                    matres[j][l] * mat3[l][k];
                }
            }
        }
        
        printf("Case #%d:\n", i+1);
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                printf("%d", matres2[j][k]);
                if(k<n-1)printf(" ");
            }
            printf("\n");
        }
    }
}
