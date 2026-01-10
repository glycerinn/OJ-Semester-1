#include <stdio.h>
#include <string.h>

int main(){
	FILE *file;
	file=fopen("testdata.in","r");
//	file=fopen("test.txt","r");
	int n;
	fscanf(file,"%d\n",&n);
	
	for(int i=0;i<n;i++){
		int a;
		fscanf(file,"%d\n",&a);
		
		char word[1001];
		fscanf(file,"%[^\n]\n",&word);
		
		int jumlah=strlen(word);
		
		for(int i=0;i<jumlah;i++){
		if(word[i] == '0'){
			word[i]='O';
		} else if(word[i] == '1'){
			word[i]='I';
		} else if(word[i] == '3'){
			word[i]='E';
		} else if(word[i] == '4'){
			word[i]='A';
		} else if(word[i] == '5'){
			word[i]='S';
		} else if(word[i] == '6'){
			word[i]='G';
		} else if(word[i] == '7'){
			word[i]='T';
		} else if(word[i] == '8'){
			word[i]='B';
		}
	}
	//dah benar
		
	
	for(int i=0;i<jumlah;i++){
		if(word[i]==' '){
			word[i]==' ';
		} else {
			for(int j=0;j<a;j++){
				word[i]--;
				if(word[i]<'A'){
					word[i]='Z';
				}
			}
		}
	}
		
	printf("Case #%d: %s\n",i+1,word);
		
		
	}
	
	return 0;
}
