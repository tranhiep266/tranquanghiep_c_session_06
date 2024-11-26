#include <stdio.h>
int main(){
	int n,i,temp=0;
	printf("Nhap mot so nguyen bat ki:");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			temp +=1;
		}
	}if(temp>2 || n <2){
		printf("%d khong phai la so nguyen to", n);
	}else{
		printf("%d la so nguyen to", n);
	}
	return 0;
}
