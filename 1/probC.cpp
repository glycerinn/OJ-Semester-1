#include <stdio.h>

int main()
{
    char str[100];
    scanf("%[^\n]", str);
    printf("Halo %s\n", str);

    return 0;
}