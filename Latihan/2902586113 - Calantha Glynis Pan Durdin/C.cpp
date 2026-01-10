#include<stdio.h>

int count;

int f(int n){
	if(n == 3 || n == 4){
		count++;
	}
	if(n==0) return 1;
	if(n==1){
		return 2;
	}else if(n%3 ==0){
		return f(n-n/3)+1;
	}else{
		return f(n - 1) + n + f(n - 2) + 1;
	}
	
	
}

int main(){
	int TC;
	scanf("%d", &TC);
	
	for(int tc = 1; tc <=TC; tc++){
		int N;
		scanf("%d", &N);
		
		count = 0;
		
		int result = f(N);
		
		printf("Case #%d: %d %d\n", tc, result, count);
	}
}
