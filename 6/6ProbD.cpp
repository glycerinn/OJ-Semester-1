#include<stdio.h>

char grid[105][105];
int visited[105][105];
int N, M;
int count;

void floor(int x, int y){
	if(x < 0 || x >= N || y < 0 || y >= M){
		return;
	}
	
	if(grid[x][y] == '#'||visited[x][y]){
		return;
	}
	
	visited[x][y] = 1;
	
	if(grid[x][y] == '.'){
		count++;
	}
	
	floor(x + 1, y);
	floor(x - 1, y);
	floor(x, y + 1);
	floor(x, y - 1);
}

int main(){
	int TC;
	scanf("%d", &TC);

    for (int tc = 1; tc <= TC; tc++) {
        scanf("%d %d", &N, &M);
        
        int sx = -1, sy = -1;
        count = 0;
        
        for(int i = 0; i < N; i++){
        	scanf("%s", grid[i]);
        	for(int j = 0; j < M; j++){
        		visited[i][j] = 0;
        		if (grid[i][j] == 'S') {
                    sx = i;
                    sy = j;
                }
			}
		}
		
		floor(sx, sy);

        printf("Case #%d: %d\n", tc, count);
    }
    
    return 0;
}
