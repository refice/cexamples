/*
Kullan�c� bir grup pozitif tam say� giriyor ve 
veri giri�i negatif bir say� girilene kadar devam ediyor. 
Kullan�c�n�n girdi�i "�ift tam say�lar�n toplam�n�" 
ve "tek tam say�lar�n toplam�n�" bulup bunlar� 
ekrana yazd�ran bir C kodu yaz�n�z. (Bu kodda 
"while" ya da "do-while" kullan�lacakt�r.)
*/
#include<stdio.h>
int main(){
	int sayi,tek_toplam,cift_toplam;
	tek_toplam=0;
	cift_toplam=0;
	sayi=54353;
	while(sayi>=0){
		printf("Sayi gir : ");
		scanf("%d",&sayi);
		if(sayi>=0){
			if(sayi%2==0){
				cift_toplam=cift_toplam+sayi;
			}
			else{
				tek_toplam=tek_toplam+sayi;
			}
		}
	}
	printf("Tek sayilarin toplami= %d\n",tek_toplam);
	printf("Cift sayilarin toplami= %d\n",cift_toplam);
	return 0;
}
