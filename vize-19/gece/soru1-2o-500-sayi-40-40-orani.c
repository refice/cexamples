/*
Kullan�c� taraf�ndan girilen 500 say�dan ilk 40 ve son 40 tanesinin 
toplam�n�n t�m 500 say�n�n toplam�na oran�n� bulan C kodunu 
"for" d�ng�s� kullanarak yaz�n�z.
*/
#include<stdio.h>
int main(){
	int i,sayi,t80=0,t500=0;
	double sonuc;
	for(i=1;i<=500;i++){
		printf("Bir tam sayi giriniz :");
		scanf("%d",&sayi);		
		t500 = t500 + sayi;
		if(i<=40 || i>=461){
			t80 = t80 + sayi;
		}
	}
	sonuc=1.0*t80/t500;
	printf("Sonuc = %f",sonuc);
	return 0;
}
