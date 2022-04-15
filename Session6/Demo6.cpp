#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		bool f;
		do{
			f = false;
			printf("Nhap pt thu %d: ",i);
			scanf("%d",&arr[i]);
			// kiem tra xem cac so tu 0 -> i-1 da co gia tri cua arr[i] ko?
			for(int j=0;j<i;j++){
				if(arr[j] == arr[i]){
					f = true;
					printf("So nay da ton tai, vui long nhap lai\n");
					break;
				}
			}
		}while(f);

	}
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
