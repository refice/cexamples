/*
Fibonecci serisi ilk iki terimi 1 olan ve sonraki terimi �nceki iki terimin 
toplam� olan bir seridir. (1 1 2 3 5 8 13 21 34 55 ...) while 
ya da do..while d�ng�s� kullanarak Fibonecci serisinin 4 milyon'un 
alt�ndaki "�ift" terimlerinin toplam�n� hesaplay�p ekrana yazd�ran 
C kodunu yaz�n�z.
*/
#include<stdio.h>
int main(){
	int s1,s2,s3,toplam;
	
	s1=1;
	s2=1;
	s3=99999; //donguye girmesi icin sacma bir deger verdik. bu deger hic kullanilmayacak
	while(s3<4000000){
		s3=s1+s2;
		if(s3%2==0){
			toplam = toplam + s3;
		}
		s1=s2;
		s2=s3;
	}
	printf("Toplam = %d", toplam);

	return 0;
}
