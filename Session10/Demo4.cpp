#include <stdio.h>
#include <string.h>
typedef struct SinhVien{
	char sName[50];
	int sAge;
	double sMark;
}SinhVien;

int main(){
	int x;
	struct SinhVien sv1;
	struct SinhVien sv2;
	
	printf("Nhap ten sv1:");
	scanf("%s",sv1.sName);
	printf("Nhap tuoi sv1:");
	scanf("%d",&sv1.sAge);
	printf("Nhap diem sv1:");
	scanf("%lf",&sv1.sMark);
	
	printf("Nhap ten sv2:");
	scanf("%s",sv2.sName);
	printf("Nhap tuoi sv2:");
	scanf("%d",&sv2.sAge);
	printf("Nhap diem sv2:");
	scanf("%lf",&sv2.sMark);
	
	SinhVien T2203E[25];
	for(int i=0;i<25;i++){
		printf("Nhap ten sv:");
		scanf("%s",T2203E[i].sName);  
		printf("Nhap tuoi sv:");
		scanf("%d",&T2203E[i].sAge);
		printf("Nhap diem sv:");
		scanf("%lf",&T2203E[i].sMark);
	}
	
	for(int i=0;i<25-1;i++){
		for(int j=0;j<25-i-1;j++){
			//if(T2203E[j].sMark > T2203E[j+1].sMark){
			if(strcmp(T2203E[j].sName,T2203E[j+1].sName) > 0){
				SinhVien tmp;
//				strcpy(tmp.sName,T2203E[j].sName);
//				tmp.sMark = T2203E[j].sMark;
//				tmp.sAge = T2203E[j].sAge;
				memcpy(&tmp,&T2203E[j],sizeof(SinhVien));// tmp = T2203E[j]

				
//				strcpy(T2203E[j].sName,T2203E[j+1].sName);
//				T2203E[j].sMark = T2203E[j+1].sMark;
//				T2203E[j].sAge = T2203E[j+1].sAge;
				memcpy(&T2203E[j],&T2203E[j+1],sizeof(SinhVien));
				
//				strcpy(T2203E[j+1].sName,tmp.sName);
//				T2203E[j+1].sMark = tmp.sMark;
//				T2203E[j+1].sAge = tmp.sAge;
				memcpy(&T2203E[j+1],&tmp,sizeof(SinhVien));	
			}
		}
	}
}
