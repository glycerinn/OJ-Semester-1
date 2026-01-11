#include<stdio.h>

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
			for(int j = 0; j < n - i - 1; j++){
				if(arr[j] >= arr[j+1]){
					int temp;
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j+1] = temp;
				}
			}
		}	
}

int main(){
	int T;
	scanf("%d", &T);
	
	int X[25];
	
	for(int t = 1; t <= T; t++){
		for(int i = 0; i < 25; i++){
			scanf("%d", &X[i]);
		}
		
		bubbleSort(X, 25);
		
		int Y1 = X[0]/2;
		int Y2 = X[1] - Y1;
		int Y5 = X[24]/2;
		int Y4 = X[23] - Y5;
		int Y3 = 0;
		
		for(int i = 3; i < 22; i++){
			int C = X[i] - Y1;
			if (C < Y2 || C > Y4) continue;
			
			int okBC = 0, ok2C = 0, okCD = 0;
			
			for(int j = 0; j < 25; j++){
				if(X[j] == 2*C) ok2C = 1;
				if(X[j] == Y2 + C) okBC = 1;
				if(X[j] == Y4 + C) okCD = 1;
			}
			
			if(ok2C && okBC && okCD){
				Y3 = C;
				break;
			}
		}
		
		printf("Case #%d: %d %d %d %d %d\n", t, Y1, Y2, Y3, Y4, Y5);
	}
	
	
	
}
