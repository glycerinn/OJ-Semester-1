#include <stdio.h>
#include <string.h>

void bubble(char arr[][101],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(strcmp(arr[j],arr[j+1])>0){
				char temp[101];
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);
			}
		}
	}
}

//void merge(char arr[][101], int left, int mid, int right){
//	int n1=mid-left+1;
//	int n2=right-mid;
//	
//	char L[n1][101], R[n2][101];
//	
//	for(int i=0;i<n1;i++){
//		L[i]=arr[left-i];
//	}
//	
//	for(int j=0;j<n2;j++){
//		R[j]=arr[mid-j+1];
//	}
//	
//	int i=0;
//	int j=0;
//	int k=left;
//	
//	while(i<n1&&j<n2){
//		if(L[i]<=R[j]){
//			arr[k]=L[i];
//			i++;
//		} else{
//			arr[k]=R[j];
//			j++;
//		}
//		k++;
//	}
//	
//	while(i<n1){
//		arr[k]=L[i];
//		i++;
//		k++;
//	}
//	while(j<n2){
//		arr[k]=R[j];
//		j++;
//		k++;
//	}
//}
//
//void mergesort(char arr[][101], int left, int right){
//	if(left<=right){
//		int mid=(left+right)/2;
//		
//		mergesort(arr,left,mid);
//		mergesort(arr,mid+1,right);
//		
//		merge(arr,left,mid,right);
//	}
//}

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int total,idx;
		scanf("%d %d", &total, &idx);
	
		char orang[total][101];
		for(int j=0;j<total;j++){
			scanf("%s",&orang[j]);
		}
		
		bubble(orang,total);
//		mergesort(orang,0,total-1);
//		
//		for(int j=0;j<total;j++){
//			printf("%s\n",orang[j]);
//		}
		
		printf("Case #%d: %s\n",i+1,orang[idx-1]);
	}
	
	return 0;
}
