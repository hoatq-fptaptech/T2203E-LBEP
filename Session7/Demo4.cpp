#include <stdio.h>
int main(){
	int temp[4][3];
	printf("Nhap ma tran:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&temp[i][j]);
		}
	}
	
	printf("Ma tran sau khi nhap xong:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",temp[i][j]);
		}
		printf("\n");
	}
}
