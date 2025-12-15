#include <stdio.h>

struct student{
    char id[101];
    char name[101];
    double score;
};

int main()
{
    int N;
    scanf("%d", &N);
    
	struct student arr[N];
	
	double total = 0;
    
    for(int i = 0; i<N; i++){
        scanf("%s", arr[i].id);
        scanf(" %[^\n]", arr[i].name);
        scanf("%lf", &arr[i].score);
        total += arr[i].score;
    }
    
	double mean = total/N;
	
	for(int j = 0; j < N; j++){
		if(arr[j].score >= mean ){
			printf("%s %s\n", arr[j].id, arr[j].name);
		}
	}
}
