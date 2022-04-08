#include <stdio.h>
int main(){
	int n;
	printf("NHap n=");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		if(i%2!=0){
			printf("%d\n",i);
		}
	}
	
	for(int i=n-1;i>=;i--){
		if(i%2==0&&i%3==0){
			printf("%d\n",i);
			break;
		}
	}
	
	
}
