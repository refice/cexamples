/*
Degerleri kodun basinda girilen 10 elemanli 
bir tam sayi dizisini ekrana yazdirma.
*/
#include<stdio.h>
#include<math.h>
int main(){
	
	int a[10] = {-7,2,-1,4,6,-11,7,9,-2,10};
	int i,sayac=0,toplam=0;
	
	for (i=0;i<10;i++){
		if(a[i]<0){
			sayac = sayac + 1;
			toplam = toplam + a[i];
		}
	}
	printf("Negatif sayilarin miktari = %d\n",sayac);
	printf("Bu negatif sayilarin toplami = %d\n",toplam);
	
	return 0;
}




