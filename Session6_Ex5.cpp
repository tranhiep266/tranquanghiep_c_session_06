#include <stdio.h>
int main(){
	int month, year, isLeap;
	printf("Nhap nam:");
	scanf("%d", &year);
	printf("Nhap thang:");
	scanf("%d", &month);
	isLeap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	if(year<0){
		printf("Nam khong hop le");
		return 0;
	}
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		printf("Thang %d co 31 ngay", month);
	}else if(month==4||month==6||month==9||month==11){
		printf("Thang %d co 30 ngay", month);
	}else if(month==2 && isLeap){
		printf("Thang 2 co 29 ngay");
	}else if(month==2 && !isLeap) {
		printf("Thang 2 co 28 ngay");
	}else{
		printf("Thang khong hop le");
	}
	return 0;
}
