#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, delta, x1, x2, x;
	printf("Nhap a:");
	scanf("%f", &a);
	printf("Nhap b:");
	scanf("%f", &b);
	printf("Nhap c:");
	scanf("%f", &c);
	delta = b * b - 4 * a * c;
	if(a==0){
		printf("Khong phai phuong trinh bac 2");
	}else if(delta > 0){
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f", x1, x2);
	}else if(delta == 0){
		x = -b / (2 * a);
		printf("Phuong trinh co nghiem kep: x = %.2f", x);
	}else{
		printf("Phuong trinh vo nghiem");
	}
	return 0;
}
