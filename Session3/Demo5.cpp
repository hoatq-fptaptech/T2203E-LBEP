#include <stdio.h>
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	
	float S=0;
	int i=1;
	  
	while(i<=n){
		S+= (float)1/i;
		i++;
	}
	
	printf("S = %f",S);
}
