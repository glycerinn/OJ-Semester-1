#include<stdio.h>
#include<string.h>

int main(){
	int tc, c;
	scanf("%d %d", &tc, &c);
	char kata[tc][201];
	
	for(int i = 0; i<tc; i++){
		scanf("%s", kata[i]);
	}
	
	for(int i =0; i<tc; i++){
		for(int j = 0; j < c-1; j++){
			for(int k = 0; k<c-j-1; k++){
				if(kata[i][k] > kata[i][k+1]){
					char temp = kata[i][k];
					kata[i][k] = kata[i][k+1];
					kata[i][k+1] = temp;
				}
			}
		}
	}
	
	for(int i=0; i<  tc -1; i++){
		for(int j = i + 1; j<tc; j++){
			if(strcmp(kata[i],kata[j]) < 0){
				char temp2[201];
				strcpy(temp2, kata[i]);
				strcpy(kata[i], kata[j]);
				strcpy(kata[j], temp2);
			}
		}
	}
	
	for(int i=0; i<tc; i++){
		printf("%s\n", kata[i]);
	}
}
