/*
Kullan�c�dan bir �r�n�n al�� fiyat�n�(af) ve sat�� fiyat�n�(sf) isteyen 
ve a�a��daki i�lemleri yapan TEK bir kod yaz�n (fiyatlar ger�el 
say� olarak al�nacakt�r).
-Bu i�lemde zarar m� yoksa kar m� edildi�i ekrana yaz�ls�n.
-Zarar ya da kar i�leminin y�zde ka� olarak ger�ekle�ti�i ekrana 
yazd�r�ls�n (E�er kar/zarar oran� \%0 ise kar olarak say�lacakt�r).

�rnek: 

Alis fiyatini giriniz : 8
Satis fiyatini giriniz : 6
Zarar edilmistir. Zarar orani yuzde -25.000000 'dir.

*/

#include<stdio.h>
#include<math.h>
int main(){
	double af,sf,sonuc;
	printf("alis fiyatini giriniz :");
	scanf("%lf",&af);
	printf("satis fiyatini giriniz :");
	scanf("%lf",&sf);
	
	sonuc = 100*(sf-af)/af;
	if (sonuc>=0){
		printf("kar edilmistir\n");
		printf("kar orani yuzde %f kadar olmustur..",sonuc);
	}
	else{
		printf("zarar edilmistir\n");
		printf("zarar orani yuzde %f kadar olmustur..",sonuc);
	}
	
	return 0;
}
