#include<stdio.h>

long long formula(long long n){
	if(n==1){
		return 1;
	}
	
	if(n % 2 == 0){
		return formula(n/2);
	}else if(n % 2 == 1){
		return formula(n - 1) + formula(n +1);
	}
}

int main(){
	int TC;
	scanf("%d", &TC);
	
	for(int tc = 1; tc <= TC; tc++){
		long long N;
		scanf("%lld", &N);
		
		long long result = formula(N);
		
		printf("Case #%d: %lld\n", tc, result);
	}
	
	return 0;
}
