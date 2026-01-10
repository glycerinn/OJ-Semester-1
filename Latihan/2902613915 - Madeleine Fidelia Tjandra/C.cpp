#include <stdio.h>

int total=0;

int f(int a){
	if(a==3 || a==4){
		total++;
	}
	if(a==0) return 1;
	else if(a==1) return 2;
	else if(a%3 == 0) return f(a-a/3)+1;
	else return f(a-1)+a+f(a-2)+1;
}

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		total=0;
		int soal;
		scanf("%d",&soal);
		
		int jawaban = f(soal);
		
		printf("Case #%d: %d %d\n",i+1,jawaban,total);
		
	}
	
	return 0;
}
