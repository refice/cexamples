/*
Kullan�c�dan pozitif ya da negatif tam say�lar girmesini 
isteyin. Girdi�i say�lar�n toplam� 
100'� ya da -100'� ge�ti�inde (100 dahil) 
program kullan�c�dan say� almay� 
durdursun, 
toplam� ve ka� defa say� girildi�ini} 
ekrana yazs�n. Bu kodu olu�turunuz. 
(Bu soruda while ya da do..while kullan�lacakt�r.)
*/
#include<stdio.h>
int main(){
	int sayi,toplam=0,sayac=0;
	while(toplam<100 && toplam>-100){
		printf("Sayi giriniz : ");
		scanf("%d",&sayi);
		toplam = toplam + sayi;
		sayac = sayac + 1;
	}
	printf("Toplam = %d\n",toplam);
	printf("Sayi miktari : %d",sayac);
	return 0;
}
