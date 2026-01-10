#include<stdio.h>

struct keluarga{
	char parent1[31];
	char parent2[31];
	int sibs;
};

struct student{
	char stcode[31];
	char stname[31];
	char stgender[31];
	struct keluarga keluargaa;
};

struct dosen{
	char dosencode[31];
	char dosenname[31];
	char dosengender[31];
	int dosenstudents;
	struct student students[100];
};

int main(){
	int T;
	scanf("%d", &T);
	
	struct dosen dosens[100];
	
	for(int t = 0; t < T; t++){
		scanf("%s", dosens[t].dosencode);
		scanf("%s", dosens[t].dosenname);
		scanf("%s", dosens[t].dosengender);
		scanf("%d", &dosens[t].dosenstudents);
		
		int jumlah = dosens[t].dosenstudents;
		
		for(int i = 0; i < jumlah; i++){
			scanf("%s", dosens[t].students[i].stcode);
			scanf("%s", dosens[t].students[i].stname);
			scanf("%s", dosens[t].students[i].stgender);
			scanf("%s", dosens[t].students[i].keluargaa.parent1);
			scanf("%s", dosens[t].students[i].keluargaa.parent2);
			scanf("%d", &dosens[t].students[i].keluargaa.sibs);
		}
	}
	
	int N;
	scanf("%d", &N);
	N--;
	
	printf("Kode Dosen: %s\n", dosens[N].dosencode);
	printf("Nama Dosen: %s\n", dosens[N].dosenname);
	printf("Gender Dosen: %s\n", dosens[N].dosengender);
	printf("Jumlah Mahasiswa: %d\n", dosens[N].dosenstudents);
	
	for(int i = 0; i < dosens[N].dosenstudents; i++){
		printf("Kode Mahasiswa: %s\n", dosens[N].students[i].stcode);
		printf("Nama Mahasiswa: %s\n", dosens[N].students[i].stname);
		printf("Gender Mahasiswa: %s\n", dosens[N].students[i].stgender);
		printf("Nama Ayah: %s\n", dosens[N].students[i].keluargaa.parent1);
		printf("Nama Ibu: %s\n", dosens[N].students[i].keluargaa.parent2);
		printf("Jumlah Saudara Kandung: %d\n", dosens[N].students[i].keluargaa.sibs);
	}
}
