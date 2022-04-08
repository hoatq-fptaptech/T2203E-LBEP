#include <stdio.h>
int main(){
	int n;
	printf("NHap n=");
	scanf("%d",&n);
	
	int t = 0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			t+=i;
		}
	}
	if(t==n){
		printf("%d la so hoan hao\n",n);
	}
}
