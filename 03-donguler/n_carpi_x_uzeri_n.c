/*
Kullan�c�n�n girdi�i bir x reel say�s� ve 
n tam say�s�na g�re nx^n de�erini 
"matematik k�t�phanesi kullanmadan" 
hesaplay�p ekrana yazan bir kod yaz�n�z.
*/
#include<stdio.h>
int main(){
	int i,n;
	double carpim=1.0,x;
	printf("x degerini giriniz : ");
	scanf("%lf",&x);
	printf("n degerini giriniz : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		carpim=carpim*x;
	}
	carpim=n*carpim;
	printf("Sonuc: %f\n",carpim);
	
	return 0;
}
