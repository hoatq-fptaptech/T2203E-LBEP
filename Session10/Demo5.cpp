#include <stdio.h>
#include <stdlib.h>
typedef struct Car{
	char nhanHieu[50];
	char soKhung[30];
	char soMay[30];
	char bienSo[20];
	double giaXe;
}Car;

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	Car *ds;
	ds = (Car *)malloc(n*sizeof(Car));
	
	for(int i=0;i<n;i++){
//		scanf("%s",ds[i].nhanHieu);
		scanf("%s",(ds+i)->nhanHieu); // ds[i].nhanHieu <=> (ds+i)->nhanHieu
//		scanf("%lf",&ds[i].giaXe);
		scanf("%lf",&((ds+i)->giaXe));// ds[i].giaXe <=> (ds+i)->giaXe	
	}
}
