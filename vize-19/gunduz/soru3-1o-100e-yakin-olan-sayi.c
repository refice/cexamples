/*
Kullan�c�dan a ve b tam say�lar�n� isteyen ve bu say�lardan
hangisinin 100 de�erine daha yak�n oldu�unu bulup ekrana 
yazan bir C kodu yaz�n�z. (Not: negatif de�erlere dikkat ediniz.)
�rnek: 
a degeri giriniz : 108
b degeri giriniz : 95
Sonuc: 95 say�s� 100'e daha yakindir.

*/
#include<stdio.h>
int main(){
	int a,b,fark_a,fark_b;
	printf("a degeri giriniz :");
	scanf("%d",&a);	
	printf("b degeri giriniz :");
	scanf("%d",&b);	
	fark_a=100-a;
	fark_b=100-b;	
	if(fark_a<0){
		fark_a=-fark_a;
	}
	if(fark_b<0){
		fark_b=-fark_b;
	}	
	if (fark_a<fark_b){
		printf("Sonuc: %d sayisi 100'e daha yakindir.",a);
	}
	else{
		printf("Sonuc: %d sayisi 100'e daha yakindir.",b);
	}

	return 0;
}
