#include<stdio.h>
#include<string.h>

int number[2000];
char video[2000][100];
char name[2000][100];

void bubble(int i, int j){
	char temp[1000];
	int tempo;
	
	strcpy(temp, video[i]);
	strcpy(video[i], video[j]);
	strcpy(video[j], temp);
	
	strcpy(temp, name[i]);
	strcpy(name[i], name[j]);
	strcpy(name[j], temp);
	
	tempo = number[i];
	number[i] = number[j];
	number[j] = tempo;
}

int main(){
	FILE *file = fopen("testdataJ.in", "r");
	
	int n = 0;
	
	while(!feof(file)){
		if(fscanf(file, "%[^#]#%[^#]#%d\n", video[n], name[n], &number[n]) != EOF){
			n++;
		}
	}

	fclose(file);
	
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j< n-i-1;j++){
			if(number[j] < number[j+1]){
				bubble(j, j+1);
			}else if(number[j] == number[j+1] && strcmp(video[j], video[j+1])>0){
				bubble(j, j+1);
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		printf("%s by %s - %d\n", video[i], name[i], number[i]);
	}
}
