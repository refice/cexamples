/*
Kullan�c�n�n girdi�i 25 tane tam say�dan
en kucuk ve en buyuk sayilari bulan program
kullanici -500000 ile 500000 arasi deger girecektir.
*/
#include<stdio.h>
int main(){
	int i,a,eb,ek; //eb=enbuyuk ek=enkucuk
	
	printf("sayi gir: ");
	scanf("%d",&a);
	eb=a;
	ek=a;	
	
	for(i=2;i<=5;i++){
		printf("sayi gir: ");
		scanf("%d",&a);
		if(a>eb){eb=a;}
		if(a<ek){ek=a;}
	}
	printf("en buyuk: %d\n",eb);
	printf("en kucuk: %d\n",ek);
	return 0;
}
