#include <stdio.h>
int main(){
	// input a
	int a;
	scanf("%d",&a);
	// input b;
	int b;
	scanf("%d",&b);
	// input c
	int c;
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("a max");
		}else{
			printf("c max");
		}
	}else{
		if(b>c){
			printf("b max");
		}else{
			printf("c max");
		}
	}
	
}
