#include<stdio.h>
int main(){
	int n;
	printf("moi nhap vao so nguyen n: ");
	scanf("%d",&n);
	if(n%3==0){
		if(n%5==0){
			printf("%d chia het cho ca 3 va 5",n);
		}
		printf("%d chia het cho 3 ",n);
	}
	else if(n%5==0){
		printf("%d chia het cho 5",n);
	}
	else{
		printf("%d khong chia het cho ca 3 va 5",n);
	}
	return 0;
}