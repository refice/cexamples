/*
Kullan�c�n�n girdi�i kilometre/saat de�erini metre/saniye'ye 
�eviren bir kod yaz�n�z. (1 km = 1000 m, 1 saat  = 60 dakika 
ve 1 dakika = 60 saniyedir. Not: ger�el say�lar kullan�n�z.)
�rnek: 
kilometre/saat de�erini giriniz : 875
Sonuc : 243.055556 metre/saniye
*/
#include<stdio.h>
int main(){
	double kmsaat,ms;
	printf("kilometre/saat degeri giriniz :");
	scanf("%lf",&kmsaat);		
	ms = kmsaat*1000/(60*60); 
	printf("Sonuc = %f metre/saniye",ms);
	return 0;
}
