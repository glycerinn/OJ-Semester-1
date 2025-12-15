#include<stdio.h>
#include <string.h>

int main(){
	FILE *file = fopen("testdataB.in", "r");
	
	int x;
	fscanf(file, "%d", &x);
	fgetc(file);
	
	char plant[2000][100];
	char name[2000][100];
	
	for(int i = 0; i < x; i++){
		fscanf(file, "%[^#]#%[^\n]", name[i], plant[i]);
		fgetc(file);
	}
	
	int n;
	fscanf(file, "%d", &n);
	for(int i = 1; i <= n; i++){
        char S[100]; 
        fscanf(file, "%s", S);
        
        int found = -1;
        
        for(int j = 0; j < x; j++){
            if(strcmp(name[j], S) == 0){
                found = j;
                break;
            }
        }
        
        if (found != -1){
            printf("Case #%d: %s\n", i, plant[found]);
        } else {
            printf("Case #%d: N/A\n", i);
        }
    }
	
	fclose(file);
}
