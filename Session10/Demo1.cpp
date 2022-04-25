#include <stdio.h>
#include <iostream>

int main(){
	int x = 10;
	printf("x = %d\n",x);
	int *p;
	p = &x;
	
	std::cout<<p;
	printf("\n");
	std::cout<<&x;
	printf("\n");
//	x++;
	(*p)++;
	printf("x = %d\n",x);
	(*p)++;
	printf("x = %d\n",x);
	
	int arr[10];
	arr[0] = 20;
	*(arr+0) = 20;
		
	arr[1] = 10;
	*(arr+1) = 10;
	
	for(int i=0;i<10;i++){
		//scanf("%d",&arr[i]);
		scanf("%d",arr+i);
	}
	
	for(int i=0;i<10;i++){
		//printf("%d",arr[i]);
		printf("%d",*(arr+i));
	}
}
