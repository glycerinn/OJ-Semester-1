#include <stdio.h>

#define MAX 10000005

int main() {
    static char s[MAX];
    int freqUpper[26] = {0};
    int freqLower[26] = {0};

    scanf("%[A-Za-z]", s);


    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            freqUpper[s[i] - 'A']++;
        else
            freqLower[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (freqUpper[i]--)
            putchar('A' + i);
        while (freqLower[i]--)
            putchar('a' + i);
    }

    return 0;
}

