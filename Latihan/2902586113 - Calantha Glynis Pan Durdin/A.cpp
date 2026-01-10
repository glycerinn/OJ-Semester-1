#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int oric[9]= {'O', 'I', 'E', 'A', 'S', 'G', 'T', 'B'};
	int num[9]= {'0', '1', '3', '4', '5', '6', '7', '8'};
	
	FILE *fp = fopen("testdata.in", "r");
	
	int TC;
	fscanf(fp, "%d\n", &TC);
	
	for(int tc = 1; tc <=TC; tc++){
		int N;
		fscanf(fp, "%d\n", &N);
		
		char sentence[1001];
		char newsentence[1001];
		char final[1001];
		fscanf(fp, "%[^\n]\n", sentence);
		
		int len = strlen(sentence);
		
		for(int i = 0; i < len; i++){
			newsentence[i] = sentence[i];
			for(int q = 0; q < 8; q++){
				if(sentence[i] == num[q]){
					newsentence[i] = oric[q];
				}
			}
		}
		
		for(int i = 0; i < len; i++){
			if(newsentence[i] == ' '){
				final[i] = ' ';
			}else{
				final[i] = newsentence[i] - N;
				if(final[i] < 'A'){
					final[i] = final[i] + 26;
				}
			}
		}
		
		final[len] = '\0';
		
		printf("Case #%d: %s\n", tc, final);
	}
	
	fclose(fp);
}

