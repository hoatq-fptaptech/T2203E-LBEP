#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int c=0;
	int i=2;
	while(i<=n/2){
		if(n%i==0){
			c++;
			printf("%d khong phai so nguyen to",n);
			break;
		}
		i++;
	}
	if(c==0){
		printf("%d la so nguyen to",n);
	}
}
