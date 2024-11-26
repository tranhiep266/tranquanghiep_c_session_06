#include <stdio.h>
int main(){
	float tienbandau, laisuat, tienlai, tiennhan=1000;
	int sothang;
	printf("Tien ban dau:");
	scanf("%f", &tienbandau);
	printf("Lai suat(phan tram):");
	scanf("%f", &laisuat);
	printf("So thang gui:");
	scanf("%d", &sothang);
	for(int i = 0; i < sothang ; i++){
		tiennhan += tiennhan * (laisuat/100);
	}
	tienlai=tiennhan-tienbandau;
	printf("Tien lai: %.3f\n",tienlai);
	printf("Tien nhan duoc: %.3f",tiennhan);
	return 0;
}
