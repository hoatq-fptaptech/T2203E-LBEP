#include <stdio.h>
int main(){
	int arr[5]={23,90,9,25,16};
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-1-i;j++){
			if (arr[j] > arr[j+1])
	        {
	           int temp = arr[j];
	           arr[j] = arr[j+1];
	           arr[j+1] = temp;
	        }

		}
	}
	
	for(int i=0;i<5;i++){
		printf("%d    ",arr[i]);
	}
}
