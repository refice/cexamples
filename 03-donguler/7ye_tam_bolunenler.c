/*
1 den 200'e kadar olan say�lardan 
7'e tam b�l�nenler ile ilgili �u i�lemleri 
yapan TEK bir kod yaz�n�z.	

1-200 aras� 7'e tam b�l�nenlerin hepsini ekrana yazs�n.
1-200 aras� 7'e tam b�l�nenlerin ka� tane oldu�unu ekrana yazs�n.
1-200 aras� 7'e tam b�l�nenlerin toplam�n� ekrana yazs�n.
*/
#include<stdio.h>
int main(){
	int i,sayac=0,toplam=0;
	for(i=1;i<=200;i++){
	   if(i%7==0){
	   		printf("%d ",i);
	   		sayac=sayac+1;
	   		toplam=toplam+i;		
	   }
	}
	printf("7ye bolunenlerin sayisi=%d\n",sayac);
	printf("7ye bolunenlerin toplami=%d",toplam);
	return 0;
}

