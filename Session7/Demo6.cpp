#include <stdio.h>
#include <string.h>
int main(){
	char s1[20],s2[20];
	printf("Chuoi 1: ");
	scanf("%s",s1); // hello
	printf("Chuoi 2: ");
	scanf("%s",s2); // t2203e
	
	strcat(s1,s2);// s1 = s1 + s2;
	printf("Sau khi strcat\n");
	printf("S1: %s\n",s1); // hellot2203e
	printf("S2: %s\n",s2); // t2203e
	
	strcat(s2,s1);// s2 = s2 + s1
	printf("Sau khi strcat\n");
	printf("S1: %s\n",s1); // hellot2203e
	printf("S2: %s\n",s2); // t2203ehellot2203e
	
	strcpy(s1,s2);// s1= s2;
	printf("Sau khi strcpy\n");
	printf("S1: %s\n",s1); // t2203ehellot2203e
	printf("S2: %s\n",s2); // t2203ehellot2203e
	
	int n = strlen(s1);
	
	printf("Do dai s1: %d\n",n);
	
	//nhap vao 1 string, chuyen string thanh in hoa het
	// vi du: t2203E -> T2203E
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]>=97 && s1[i]<=122){
			s1[i] -=32;
		}
	}
}
