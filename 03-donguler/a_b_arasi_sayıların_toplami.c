/*
 Kullan�c�n�n girece�i a ve b tam say�lar�na 
 g�re a'dan b'ye kadar (a ve b dahil de�il) 
 olan t�m tamsay�lar�n kendilerinin toplam�n� 
 ve karelerinin toplam�n� ekrana yazan 
 bir C kodu yaz�n.
*/
#include<stdio.h>
int main(){
	int i,a,b,toplam=0,toplam2=0;
	
	printf("a degerini giriniz : ");
	scanf("%d",&a);
	printf("b degerini giriniz : ");
	scanf("%d",&b);
	for(i=a+1;i<b;i++){
		toplam = toplam + i;
		toplam2 = toplam2 + i*i;
		
	}
	printf("%d den %d sayisina kadar toplam: %d\n",a,b,toplam);
	printf("%d den %d sayisina kadar sayilarin karelerinin toplam: %d\n",a,b,toplam2);
	
	return 0;
}
