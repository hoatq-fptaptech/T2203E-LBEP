#include <stdio.h>
int main(){
	int S = 4000;
	
	int year;
	printf("Nhap year= ");
	scanf("%d",&year);
	
	int i =0;
	
	while(i<year){
		// logic khi yes
		int L = S * 8/100;
		S += L;
		i++;
	}
	// no
	printf("S = %d\n",S);
}
