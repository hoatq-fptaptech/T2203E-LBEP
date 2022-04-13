#include <stdio.h>
int main(){
	int a,b;
	do{
		printf("Nhap so nguyen duong a = ");
		scanf("%d",&a);
		
		printf("Nhap so nguyen duong b = ");
		scanf("%d",&b);
	}while( !( b > a && a>0 ));
	
	for(int i=a;i<=b;i++){
		// kiem tra i co phai SNT hay khong
		if(i==1){
			continue;
		}
		if(i<4){ // i chi co the la 2 hoac 3
			printf("SNT: %d\n",i);
			continue;
		}
		// i>=4
		bool f = true;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				f= false;
				break;
			}
		}
		if(f){
			printf("SNT: %d\n",i);
		}
	}

}
