/*
Kullan�c�dan bir �r�n�n sipari� adedini(sa) ve birim fiyat�n�(bf) 
isteyen ve a�a��daki i�lemleri yapan TEK bir kod yaz�n (fiyatlar 
ger�el say� olarak al�nacakt�r).
-Sipari�in toplam tutar�, "Liste Fiyat�" olarak ekrana yaz�ls�n.
-E�er toplam tutar 100 liran�n alt�nda ise \%5, 100 ve 100 
liran�n �st�nde ise \%10 indirim uygulanacak olup indirimli 
toplam tutar ekrana yazd�r�lacakt�r.
	
�rnek: 
Siparis adedini giriniz : 5
Birim fiyatini giriniz : 8
Liste Fiyat� : 40.000000
%5 indirimli fiyat: 38.000000
*/

#include<stdio.h>
#include<math.h>
int main(){
	double sa,bf,listefiyati,indirim5,indirim10;
	printf("siparis adedini giriniz :");
	scanf("%lf",&sa);
	printf("birim adedini giriniz :");
	scanf("%lf",&bf);
	
	listefiyati = sa*bf;
	indirim5=listefiyati*0.95;
	indirim10=listefiyati*0.9;
	
	printf("Liste fiyati = %f\n",listefiyati);
	
	if (listefiyati<100){
		printf("yuzde 5 indirimli fiyat = %f",indirim5);
	}
	else{
		printf("yuzde 10 indirimli fiyat = %f",indirim10);
	}
	
	return 0;
}
