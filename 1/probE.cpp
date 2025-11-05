#include <stdio.h>

int main()
{
    char Id[100];
    char Name[101];
    char kelas[100];
    int num;
    
    scanf("%[^\n]", Id);
    // getchar();
    scanf(" %[^\n]", Name);
    scanf("%s", kelas);
    scanf("%d", &num);
    
    printf("Id    : %s\n", Id);
    printf("Name  : %s\n", Name);
    printf("Class : %s\n", kelas);
    printf("Num   : %d\n", num);
    
    return 0;
}