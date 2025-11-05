#include <stdio.h>

int main()
{
    char word[21];
    char word2[21];
    char word3[21];
    scanf("%[a-z] %[a-z] %[a-z]", word, word2, word3);
    printf("%s %s %s\n", word3, word2, word);
}