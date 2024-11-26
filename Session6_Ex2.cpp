#include <stdio.h>
int main(){
	int num1, num2, num3, num4, num5, odd=0, even=0;
	printf("Nhap vao so nguyen thu 1:");
	scanf("%d", &num1);
	printf("Nhap vao so nguyen thu 2:");
	scanf("%d", &num2);
	printf("Nhap vao so nguyen thu 3:");
	scanf("%d", &num3);
	printf("Nhap vao so nguyen thu 4:");
	scanf("%d", &num4);
	printf("Nhap vao so nguyen thu 5:");
	scanf("%d", &num5);

	if(num1 % 2 !=0){
		odd += 1 ;
	}else{
		even += 1;
	}
	if(num2 % 2 !=0){
		odd += 1;
	}else{
		even += 1;
	}
	if(num3 % 2 !=0){
		odd += 1;
	}else{
		even += 1;
	}
	if(num4 % 2 !=0){
		odd += 1;
	}else{
		even += 1;
	}
	if(num5 % 2 !=0){
		odd += 1;
	}else{
		even += 1;
	}
	printf("so le trong cac so da nhap la:%d\n", odd);
	printf("so chan trong cac so da nhap la:%d\n", even);
	return 0;
}
