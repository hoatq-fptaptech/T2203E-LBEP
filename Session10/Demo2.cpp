#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr;
	//arr = (int *)malloc(10 * sizeof(int)); // int arr[10];
	arr = (int *)calloc(10,sizeof(int));
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	// thay doi kich thuoc mang
	arr = (int *)realloc(arr,20*sizeof(int));
	for(int i=10;i<20;i++){
		scanf("%d",&arr[i]);
	}
	
	// giai phong o nho
	free(arr);
	//arr = (int *)realloc(arr,0*sizeof(int));
}
