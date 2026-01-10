#include<stdio.h>
#include<string.h>

void swap(char a[][101], int i, int j){
	char temp[101];
	strcpy(temp, a[i]);
	strcpy(a[i], a[j]);
	strcpy(a[j], temp);
}

int main(){
	int TC;
	scanf("%d", &TC);
	
	for(int tc = 1; tc <=TC; tc++){
		int A, B;
		scanf("%d %d", &A, &B);
		
		char name[A][101];
		
		for(int i = 0; i < A; i++){
			scanf("%s", name[i]);
		}
		
		for(int i = 0; i < A - 1; i++){
			for(int j = 0; j < A - i-1; j++){
				if(strcmp(name[j], name[j+1]) > 0){
					swap(name, j, j+1);
				}
			}
		}		
		
		printf("Case #%d: %s\n", tc, name[B-1]);
	}
}
