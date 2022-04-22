#include <stdio.h>
int timUCLN(int *p,int n){
	int ucln = 1;
	int m = p[0]>0?p[0]:-p[0];
	for(int i=2;i<m;i++){
		bool f= true;
		for(int j=0;j<n;j++){
			if(p[j]%i!=0){
				f = false;
				break;
			}
		}
		if(f && i>ucln){
			ucln = i;
		}
	}
	return ucln;
}

int main(){
	int arr[5] = {-50,-20,-60,-80,-20};
	int ucln = timUCLN(arr,5);
	printf("UCLN: %d",ucln);
}
