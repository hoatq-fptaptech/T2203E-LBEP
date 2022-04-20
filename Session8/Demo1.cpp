#include <stdio.h>
#include "func.h"
#include "array.h"
int main(){
	int a = 10,b = 20;
	
	int z = tinhTong(a,b);
	if(checkEven(b)){
		printf("%d la so chan\n",b);
	}
	menu();
	
	int ary[5] = {3,1,4,5,2};
	int max = timMax(ary,5);
	int max2 = timMax2(ary,5);
	
}
