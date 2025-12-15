#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp = fopen("testdataD.in", "r");
	
	int D;
	fscanf(fp, "%d\n", &D);
	
	char shortw[D][101];
	char longw[D][101];
	
	for (int i = 0; i < D; i++) {
        fscanf(fp, "%[^#]#%[^\n]\n", shortw[i], longw[i]);
    }
    
    int TC;
	fscanf(fp, "%d\n", &TC);
   	
	for(int tc = 1; tc <= TC; tc++){
   		char sentence[1001];
   		fgets(sentence, 1000, fp);
   		
   		printf("Case #%d:\n", tc);
   		
   		char word[101];
   		int idx = 0;
   		
   		for(int i = 0; sentence[i] != '\0'; i++ ){
   			if(sentence[i] != ' ' && sentence[i] != '\n'){
   				word[idx++] =sentence[i];
			   }else{
			   	word[idx] = '\0';
				
				if(idx > 0){
					int found = 0;
					for (int j = 0; j < D; j++){
						if(strcmp(word, shortw[j]) == 0){
							printf("%s", longw[j]);
							found = 1;
							break;
						}
					}
					
					if(!found){
						printf("%s", word);
				   	}
				}
			
				if (sentence[i] == ' ')
	                    printf(" ");
	
	                idx = 0;
			   }
			   
			}
		   
		   printf("\n");
		}
	
    fclose(fp);
    return 0;
}
