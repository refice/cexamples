/*
Kullan�c� taraf�ndan girilen 500 pozitif say�dan iki haneli 
say�lar�n miktar�n�n d�rt haneli say�lar�n miktar�na oran�n� 
"for" d�ng�s� kullanarak bulan bir C kodu yaz�n�z.
*/
#include<stdio.h>
int main(){
	int i,sayi,sayac2hane=0,sayac4hane=0;
	double sonuc;
	for(i=1;i<=500;i++){
		printf("Bir tam sayi giriniz :");
		scanf("%d",&sayi);		
		if(sayi>=10 && sayi<=99){
			sayac2hane = sayac2hane + 1;
		}
		if(sayi>=1000 && sayi<=9999){
			sayac4hane = sayac4hane + 1;
		}
	}
	sonuc=1.0*sayac2hane/sayac4hane;
	printf("Sonuc = %f",sonuc);
	return 0;
}
