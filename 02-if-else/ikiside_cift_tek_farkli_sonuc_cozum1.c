/*
Kullan�c�dan 2 tam say� girmesini isteyin. 
Yazaca��n�z C kodu, bu say�lar�n e�er ikisi de 
�ift ise ekrana "ikisi de �ift", e�er ikisi de 
tek ise ekrana "ikisi de tek", e�er birisi tek 
birisi �ift ise "farkl� sonu�" ifadelerini yazs�n.
*/

#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("1. tam sayiyi giriniz :");
	scanf("%d",&a);
	printf("2. tam sayiyi giriniz :");
	scanf("%d",&b);
	
	if(a%2==0){
		if(b%2==0){
			printf("Ikisi de cift");
		}
		else{
			printf("farkli sonuc");
		}
	}
	else{
		if(b%2==1){
			printf("Ikisi de tek");
		}
		else{
			printf("farkli sonuc");
		}
	}
	
	return 0;
}
