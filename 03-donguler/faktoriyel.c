/*
Kullan�c�n�n girdi�i bir 
n tam say�s�na g�re n! (n faktoriyel)
hesaplay�p ekrana yazan bir kod yaz�n�z.
*/
#include<stdio.h>
int main(){
	int n,i,carpim=1;
	printf("n degeri giriniz : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		carpim=carpim*i;
	}
	printf("Sonuc : %d",carpim);
	return 0;
}
