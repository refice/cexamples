/*
kullanicinin girdigi bir tam sayinin asal olup 
olmadigini fonksiyon icerisinde bulunuz...
*/
#include<stdio.h>
#include<math.h>

// prototip
int asalKontrol(int);


int main(){
	int a,sonuc;
	printf("tam sayi degerini giriniz :");
	scanf("%d",&a);
	sonuc=asalKontrol(a);
	if(sonuc==1){
		printf("bu sayi asaldir");
	}
	else{
		printf("bu sayi asal degildir");
	}
	return 0;
}




// int degeri alir. bu deger asal ise 1 dondurur
// asal degil ise 0 dondurur..
int asalKontrol(int n){
	int i,asalmi=1;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			asalmi=0;
			break;
		}
	}
	return asalmi;
}



