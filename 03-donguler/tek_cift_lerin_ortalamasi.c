/*
Kullan�c� bir grup pozitif tam say� giriyor ve 
veri giri�i -1 say�s� girilene kadar devam ediyor. 
Kullan�c�n�n girdi�i "�ift tam say�lar�n adetini,
toplam�n� ve ortalamasini" 
ve "tek tam say�lar�n adetini,
toplam�n� ve ortalamasini" bulup bunlar� 
ekrana yazd�ran bir C kodu yaz�n�z. (Bu kodda 
"while" ya da "do-while" kullan�lacakt�r.)
*/
#include<stdio.h>
int main(){
	int sayi,tek_toplam=0,cift_toplam=0;
	int tek_sayac=0,cift_sayac=0;
	
	sayi=1000;
	while(sayi>=0){
		printf("Sayi gir : ");
		scanf("%d",&sayi);
		if(sayi>=0 && sayi%2==0){
			cift_toplam = cift_toplam + sayi;
			cift_sayac = cift_sayac + 1;
		}
		if(sayi>=0 && sayi%2==1){
			tek_toplam = tek_toplam + sayi;
			tek_sayac = tek_sayac + 1;
		}
	}
	printf("Tek sayilarin toplami= %d\n",tek_toplam);
	printf("Cift sayilarin toplami= %d\n",cift_toplam);
	printf("Tek sayilarin adeti= %d\n",tek_sayac);
	printf("Cift sayilarin adeti= %d\n",cift_sayac);
	printf("Tek sayilarin ort.= %f\n",1.0*tek_toplam/tek_sayac);
	printf("Cift sayilarin ort.= %f\n",1.0*cift_toplam/cift_sayac);
	return 0;
}
