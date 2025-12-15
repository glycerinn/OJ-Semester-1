#include<stdio.h>
#include<string.h>

struct info{
	char nama[256];
	int score;
};

int binSearch(struct info data[], int tc, char key[]){
	int l = 0, r = tc -1;
	while(l<=r){
		int mid= (l+r)/2;
		int cmp = strcmp(data[mid].nama, key);
		if(cmp==0) return mid;
		if(cmp<0) l = mid+1;
		else r = mid-1;
	}
	return -1;
}

int main(){
	int tc=0;
	int m=0;
	
	scanf("%d", &tc);
	
	struct info data[tc];
	
	for(int i = 0 ; i< tc; i++){
		scanf("%s %d", data[i].nama, &data[i].score);
	}
	
	scanf("%d", &m);
	
	char p1[256], p2[256];
	
	for(int i = 0; i<m; i++){
		scanf("%s %s", p1, p2);
		
		if(strcmp(p1, p2) == 0){
			printf("not valid\n");
			continue;
		}
		
		int idx1 = binSearch(data, tc, p1);
		int idx2 = binSearch(data, tc, p2);
		
		if(idx1 == -1 || idx2 == -1){
			printf("not found\n");
			continue;
		}
		
		int scoreGap = data[idx1].score - data[idx2].score;
		if(scoreGap < 0) scoreGap = -scoreGap;
		
		int boardGap= idx1 - idx2;
		if(boardGap < 0) boardGap = -boardGap;
		
		printf("%d %d\n", scoreGap, boardGap);
	}
	
	return 0;
}
