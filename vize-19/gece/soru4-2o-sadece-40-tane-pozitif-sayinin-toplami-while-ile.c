/*
Kullan�c�dan pozitif ya da negatif tam say�lar girmesi isteniyor. 
Yazaca��n�z C kodunda bu say�lar toplanacak ancak toplama "negatif" 
say�lar dahil edilmeyecektir. Toplamas� yap�lan pozitif say�lar�n 
miktar� 40 olunca kullan�c�dan say� alma i�lemi durdurulacak ve 
toplam ekrana yazd�r�lacakt�r (Bu kodda "while" ya da "do-while" kullan�lacakt�r).
*/
#include<stdio.h>
int main(){
	int sayi,sayac=0,toplam=0;

	while(sayac<40){
		printf("Sayi giriniz=");
		scanf("%d",&sayi);
		if(sayi>=0){
			toplam = toplam + sayi;
			sayac = sayac + 1;
		}
	}
	printf("Toplam = %d", toplam);
	return 0;
}
