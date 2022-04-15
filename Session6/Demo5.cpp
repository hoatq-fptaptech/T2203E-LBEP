#include <stdio.h>
int main(){
	int arr[11]={1,2,5,6,9,10,15,22,29,56,102};
	int search = 56;
	int low = 0;
	int hi = 10;
	bool f = true;
	while(low < hi){
		int mid = (low +hi)/2;
		if(search == arr[mid]){
			printf("Da tim thay");
			f= false;
			break;
		}else if(search < arr[mid]){
			hi = mid -1;
		}else{
			low = mid + 1;
		}
	}
	if(f){
		printf("Not found!")
	}
	
}

