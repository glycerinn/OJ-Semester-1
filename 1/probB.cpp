#include <stdio.h>

int main()
{
    char str[100];
    scanf("%[^\n]", str);
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", str);

    return 0;
}