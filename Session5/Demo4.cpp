#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++){ // duyet mang
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]> max){
			max = arr[i];
		}
	}
	printf("Max: %d\n",max);
	
	// tim so gan lon nhat: 1 4 1 0 8 5 => max: 8 , gan max: 5 
	int max2 = max ;
	for(int i=0;i<n;i++){
		if(arr[i]< max){
			max2=arr[i];
			break;
		}
	}
	if(max2 == max){
		printf("Khong co so gan lon nhat \n");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]> max2 && arr[i]<max){
				max2 = arr[i];
			}
		}
		printf("So gan lon nhat: %d\n",max2);
	}
	
	// 5 4 3 2 1
	// 5 5 5 3 2 1
	// - 1 -2 -3 -4 -5 
	
}
