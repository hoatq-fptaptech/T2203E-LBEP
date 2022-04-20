int tinhTong(int a, int b){
	int c = a +b;
	return c;
}
bool checkEven(int n){
//	if(n%2==0){
//		return true;
//	}
//	return false;
	
	return n%2==0;
	
}
void menu(){
	printf("Vui long chon mon an:\n");
	printf("1. Lau hai san\n");
	printf("2. Lau rieu cua\n");
	return;
}

bool ktSNT(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0)
			return false;
	}
	return true;
}


