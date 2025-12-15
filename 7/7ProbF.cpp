#include <stdio.h>

struct studentdata {
    char name[101];
    char id[10];
    int age;
    char postal[7];
    char pob[101];
    char dob[101];
    char hs[101];
    int sibs;
    int height;
    char bank[20];
};



int main() {
    int TC;
    scanf("%d", &TC);
	struct studentdata arr[TC];
	
    for (int tc = 0; tc < TC; tc++) {
        scanf("%s", arr[tc].name);
        scanf("%s", arr[tc].id);
        scanf("%d", &arr[tc].age);
        scanf("%s", arr[tc].postal);
        scanf("%s", arr[tc].pob);
        scanf("%s", arr[tc].dob);

        getchar();
        scanf("%[^\n]", arr[tc].hs);

        scanf("%d", &arr[tc].sibs);
        scanf("%d", &arr[tc].height);
        scanf("%s", arr[tc].bank);

        printf("Mahasiswa ke-%d:\n", tc + 1);
        printf("Nama: %s\n", arr[tc].name);
        printf("NIM: %s\n", arr[tc].id);
        printf("Umur: %d\n", arr[tc].age);
        printf("Kode Pos: %s\n", arr[tc].postal);
        printf("Tempat Lahir: %s\n", arr[tc].pob);
        printf("Tanggal Lahir: %s\n", arr[tc].dob);
        printf("Almamater SMA: %s\n", arr[tc].hs);
        printf("Jumlah Saudara Kandung: %d\n", arr[tc].sibs);
        printf("Tinggi Badan: %d\n", arr[tc].height);
        printf("NOMOR REKENING: %s\n", arr[tc].bank);
    }

    return 0;
}

