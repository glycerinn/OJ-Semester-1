#include<stdio.h>

int count;
int F(int n){
	if(n == 3 || n == 4) count++;

		if(n == 0){
			return 1;
		}else if(n == 1){
			return 2;
		}else if(n % 3 == 0){
			return F(n-n/3) + 1;
		}
		else{
			return F(n-1) + n + F(n-2) + 1;
		}
}

int main(){
	int T;
	scanf("%d", &T);
	
	int N;
	for(int tc = 0; tc < T; tc++){
		count = 0;
		scanf("%d", &N);
		
		int res;
		res = F(N);

		printf("Case #%d: %d %d\n", tc+1, res, count);
	}
	return 0;
}
