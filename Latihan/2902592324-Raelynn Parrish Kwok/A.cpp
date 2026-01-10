#include<stdio.h>
#include<string.h>

int main(){
	FILE *file = fopen("testdata.in", "r");
	
	int T;
	fscanf(file, "%d\n", &T);
	
	for(int tc = 0; tc < T; tc++){
		int len = 0;
		int K = 0; char S[1001];
		fscanf(file, "%d\n", &K);
		fscanf(file, "%[^\n]\n", S);
		
		len = strlen(S);
		char result[1001];

		for(int i = 0; i < len; i++){
			if(S[i] == '0'){
				result[i] = 'O';
			}else if(S[i] == '1'){
				result[i] = 'I';
			}else if(S[i] == '3'){
				result[i] = 'E';
			}else if(S[i] == '4'){
				result[i] = 'A';
			}else if(S[i] == '5'){
				result[i] = 'S';
			}else if(S[i] == '6'){
				result[i] = 'G';
			}else if(S[i] == '7'){
				result[i] = 'T';
			}else if(S[i] == '8'){
				result[i] = 'B';
			}else{
				result[i] = S[i];
			}
		}
		
		char fin[1001];
		for(int j = 0; j < len; j++){
			if(result[j] == ' '){
				fin[j] = ' ';
			}else{
				fin[j] = result[j] - (K);
				if(fin[j] < 'A'){
					fin[j] = fin[j] + 26;
				}
			}
		}
		
		fin[len] = '\0';
		
		printf("Case #%d: ", tc+1);
		printf("%s\n", fin);
	}
	return 0;
}
