/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct student{
    char id[21];
    char name[101];
    int age;
};

int main()
{
    struct student arr[100000];
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i<N; i++){
        scanf("%s", &arr[i].id);
        scanf(" %[^\n]", &arr[i].name);
        scanf("%d", &arr[i].age);
    }
    
    int Q, m;
    scanf("%d", &Q);
    for(int j = 0; j < Q; j++){
        scanf("%d", &m);
        printf("Query #%d: \n", j+1);
        printf("ID: %s\n", arr[m-1].id);
        printf("Name: %s\n", arr[m-1].name);
        printf("Age: %d\n", arr[m-1].age);
    }
}