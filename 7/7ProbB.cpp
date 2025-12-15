#include <stdio.h>

struct student{
    char name[101];
    int group;
};

int main()
{
    int T;
    scanf("%d", &T);
    
    for(int tc = 1; tc <=T; tc++){
		int N;
    	scanf("%d", &N);
    	
    	struct student arr[N];
    	int groupnum = 0;
    	
    	for(int j = 0; j < N; j++){
    		scanf("%s %d", arr[j].name, &arr[j].group);
    		if(arr[j].group > groupnum){
    			groupnum = arr[j].group;
			}
		}
		
		printf("Case #%d:\n", tc);
		
		for(int k = 1; k <= groupnum; k++){
			int people = 0;
			
			for (int g = 0; g < N; g++) {
                if (arr[g].group == k)
                    people++;
            }
            
            if (people > 0) {
                printf("Group %d(%d):\n", k, people);

                for (int i = 0; i < N; i++) {
                    if (arr[i].group == k)
                        printf("%s\n", arr[i].name);
                }
            }
		}
	}
}
