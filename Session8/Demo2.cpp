#include <stdio.h>
#include "array.h"
int main(){
	int arr[6] = {1,3,1,1,2,2};
	int max = timMax(arr,6);
	
	int ary[10];
	nhapMang(ary,10);
	xuatMang(ary,10);
	sapXepMang(ary,10);
	xuatMang(ary,10);
	printf("\nPt thu 5: %d\n",ary[5]);
	int x = 137;
	int x2= timDaoNguoc(x);
	printf("Dao nguoc cua %d la %d\n",x,x2);
}
