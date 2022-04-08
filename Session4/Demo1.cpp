#include <stdio.h>
int main(){
	int x = 10;
	for(int i=0;i<10;i++){
		printf("i= %d\n",i);
	}
	//printf("Sau vong lap i= %d\n",i);// ko ton tai i
	for(int i=0;i<10;i++){
		printf("i= %d\n",i);
	}
	for(int i=0;i<10;i++){
		printf("i= %d\n",i);
	}
	for(int i=0;i<10;i++){
		printf("i= %d\n",i);
	}
	for(int i=0;i<10;i++){
		printf("i= %d\n",i);
	}
	printf("x = %d\n",x);
	
	if(x > 5){
		int y=20;
	}
	// y not declare
	
	for(int i=0,j=0;i<10&&j<10;i++,j++){
		printf("i= %d j= %d \n",i,j);
	}
	
	int S = 4000;
	for(int i=0;i<4;S+= S*8/100,i++ );
	// printf S
	int k;
	for(k=0;S<1000000; ){
		S+=S*8/100;
		k++
	}
	// printf k
}
