#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp = fopen("testdataC.in", "r");
	if(!fp) return 0;
		
	int T;
	fscanf(fp, "%d", &T);
	
	for(int t = 0; t < T; t++){
		char word[101];
		fscanf(fp, "%s", word);
		
		int letters;
		fscanf(fp, "%d", &letters);
		
		char map[26];
		for(int i = 0; i < 26; i++){
			map[i] = 'A' + i;
		}
		
		for(int i = 0; i < letters; i++){
			char A, B;
			fscanf(fp, " %c %c", &A, &B);
			map[A - 'A'] = B;
		}
		
		int freq[26] = {0};
		for(int i = 0; word[i] != '\0' ; i++){
			char finalC = map[word[i] - 'A'];
			freq[finalC - 'A']++;
		}
		
		for(int i = 0; i < 26; i++){
			if(freq[i] > 0){
				printf("%c %d\n", 'A' + i, freq[i]);
			}
		}
	}
	
	fclose(fp);
}
