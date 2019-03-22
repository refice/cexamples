/*
Collatz dizisinin ilk eleman� birden b�y�k rastgele 
bir tamsay�d�r. Bu say�ya n diyelim. E�er n �ift ise 
dizinin s�radaki eleman� n/2, tek ise 3n+1 olur. 
T�m say�lar i�in ispatlanamasa da bu �ekilde dizi 
belli bir say�dan sonra 1'e inmektedir. Kullan�c�n�n 
girdi�i bir n (n>1) say�s�n� Collatz dizisinin 
ilk eleman� olarak kabul eden ve serinin elemanlar�n�
ve ka� tane eleman� oldu�unu (sondaki 1 say�s� hari�) 
ekrana yazan bir C kodu yaz�n�z. (Bu kodda "while" 
ya da "do-while" kullan�lacakt�r.)

�rnek: 

Bir tam sayi giriniz : 15

15 46 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 

eleman sayisi = 17

*/
#include<stdio.h>
int main(){
	int n,sayac=0,enbuyuk;
	printf("Bir tam sayi giriniz : ");
	scanf("%d",&n);
	enbuyuk=n;
	while(n>1){
	   	printf("%d ",n);
		if(n%2==0){
	   		n=n/2;
		}
		else{
			n=n*3+1;
		}
		if (n>enbuyuk){
			enbuyuk=n;
		}
		sayac=sayac+1;
	}
	printf("\n\nSayi miktari : %d",sayac);
	printf("\n\nEn buyuk sayi : %d",enbuyuk);
	return 0;
}
