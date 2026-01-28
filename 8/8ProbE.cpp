#include<stdio.h>
#include<string.h>

struct product{
	char name[101];
	int stock;
};

int main(){
	FILE *file = fopen("testdataE.in", "r");
	if(!file) return 0;
	
	int tc;
	fscanf(file, "%d\n", &tc);
	
	for(int i = 1; i <= tc; i++){
		int N;
		fscanf(file, "%d\n", &N);
		
		struct product products[60];
		int productcount = 0;
		int invalid = 0;
		
		for(int j = 0; j < N; j++){
			char type[101], name[101];
			int quantity;
			
			fscanf(file, "%[^#]#%[^#]#%d\n", type, name, &quantity);
			
			int index = -1;
			for(int k = 0; k < productcount; k++){
				if(strcmp(products[k].name, name) == 0){
					index = k;
					break;
				}
			}
			
			if(index == -1){
				index = productcount;
				strcpy(products[productcount].name, name);
				products[productcount].stock = 0;
				productcount++;
			}
			
			if(strcmp(type, "buy") == 0){
				products[index].stock += quantity;
			}else{
				products[index].stock -= quantity;
			}
		}
		
		printf("Case #%d:\n", i);
		
		for(int p = 0; p < productcount; p++){
			if(products[p].stock < 0){
				printf("stock is not enough for product %s\n", products[p].name);
				invalid = 1;
			}
		}
		
		if(!invalid){
			for(int p = 0; p < productcount; p++){
				printf("%s - %d\n", products[p].name, products[p].stock);
			}
		}
	}
	
	fclose(file);
}
