#include <stdio.h>
int main(){
	int x = 10;
	
	if(x>=10){
		printf("A");
	}else if(x > 5){
		printf("B");
	}else if(x > 20){
		printf("C");
	}else{
		printf("D");	
	}
	
	switch(x + 20){
		case 10:{
			switch(x+5){
				case 10:printf("AA");break;
			}
			break;
		}
		case 20: printf("B");break;
		case 30: printf("C");break;
		case 40: printf("D");break;
		default: printf("E");break;
	}
	
	if(x+20 == 10){
		
	}else if(x+20 == 20){
		
	}else if(x+20 == 30){
		
	}else if(x+20 == 40){
		
	}else{
		
	}
}
