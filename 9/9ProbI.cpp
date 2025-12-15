#include<stdio.h>
#include<string.h>

void bubble(char a[][100], char b[][100], int i, int j){
	char temp[1000];
	strcpy(temp, a[i]);
	strcpy(a[i], a[j]);
	strcpy(a[j], temp);
	
	strcpy(temp, b[i]);
	strcpy(b[i], b[j]);
	strcpy(b[j], temp);
}

int main(){
	FILE *file = fopen("testdataI.in", "r");
	
	int x;
	fscanf(file, "%d", &x);
	fgetc(file);
	
	char number[2000][100];
	char name[2000][100];
	
	for(int i = 0; i < x; i++){
		fscanf(file, "%[^#]#%[^\n]", number[i], name[i]);
		fgetc(file);
	}
	
	fclose(file);
	
	for(int i = 0; i<x-1; i++){
		for(int j = 0; j< x-i-1;j++){
			if(strcmp(name[j], name[j+1])> 0){
				bubble(name, number, j, j+1);
			}
		}
	}
	
	for(int i = 0; i<x; i++){
		printf("%s %s\n", number[i], name[i]);
	}
}
