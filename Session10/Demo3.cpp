#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int *arr;
	arr = (int *)malloc(n*sizeof(int));
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	int max = *arr;
	for(int i=0;i<n;i++){
		if(max<*(arr+i))
			max = *(arr+i);
	}
	printf("MAX: %d\n",max);
	
	int m;
	printf("Nhap so luong muon them:");
	scanf("%d",&m);
	arr = (int *)realloc(arr,(m+n)*sizeof(int));
	printf("Nhap cac gia tri muon them:\n");
	for(int i=n;i<n+m;i++){
		scanf("%d",arr+i);
	}
	
	for(int i=n;i<n+m;i++){
		if(max<*(arr+i))
			max = *(arr+i);
	}
	printf("MAX: %d\n",max);
}
