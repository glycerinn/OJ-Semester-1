#include <stdio.h>

int main()
{
    char Name[101];
    scanf("%[^\n]", Name);
    printf("#include <stdio.h>\n");
    printf("int main()\n{\n");
    printf("    printf(\"%%s\\n\","); 
    printf("\"%s\");\n", Name);
    printf("    return 0;\n");
    printf("}\n");
} 