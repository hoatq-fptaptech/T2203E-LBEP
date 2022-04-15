#include <stdio.h>
int main(){
	int arr[5]={23,90,9,25,16};
	int tmp;
	
	for(int i=1;i<5;i++){
		tmp = arr[i];// day la gia tri can tim vi tri dung
		int j=i-1;
		for( ;j>=0&& tmp<arr[j]; ){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = tmp;
	}
	
	for(int i=0;i<5;i++){
		printf("%d   ",arr[i]);
	}

}
