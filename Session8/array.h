int timMax(int arr[],int n){
	int m = arr[0];
	for(int i=0;i<n;i++){
		if(m<arr[i]){
			m = arr[i];
		}
	}
	return m;
}

int timMax2(int *arr,int n){
	int m = arr[0];
	for(int i=0;i<n;i++){
		if(m<arr[i]){
			m = arr[i];
		}
	}
	return m;
}
void nhapMang(int arr[],int n){
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuatMang(int arr[],int n){
	printf("\nXuat mang:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}

void sapXepMang(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]> arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int timDaoNguoc(int n){
	int m=0;
	while(n!=0){
		m=m*10 + n%10;
		n/=10;
	}
	return m;
}
