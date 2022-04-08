#include <stdio.h>
int main(){
	int i = 0;
	while(i>0){
		printf("While ...");
	}
	
	do{
		printf("Do While ...");
	}while(i>0);
	
	// yeu cau nguoi dung nhap 1 so le
//	int n;
//	printf("Nhap so le:");
//	scanf("%d",&n);
//	while(n%2==0){
//		printf("Nhap so le:");
//		scanf("%d",&n);
//	}
	// muon ra dc day thi phai co so le
//	int n;
//	do{
//		printf("Nhap so le:");
//		scanf("%d",&n);
//	}while(n%2==0);
	// muon ra dc day thi phai co so le
	
//	ABC: printf("Label ABC\n");
//	if(n>5){
//		printf("IF N>%\n");
//		goto ABC;
//	}
	
	for(int i=0;i<10;i++){
		printf("Before i=%d\n",i);
		if(i==5){
			continue;
		}
		printf("After i=%d\n",i);
	}

}
