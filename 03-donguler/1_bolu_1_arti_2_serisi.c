/*
  1       1       1
----- + ----- + ----- + ...
 1+2     2+3     3+4
Yukar�daki serinin ilk n terimininin 
toplam�n� hesaplayan C kodunu 
tamamlay�n�z. (int double d�n���m�ne 
dikkat ediniz.)

*/
#include<stdio.h>
int main(){
	int i,n;
	double toplam=0;
	printf("Serinin terim sayisini girin :");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
	   toplam = toplam + 1.0/(i+i+1);
	}
	printf("\nToplam : %f",toplam);
	return 0;
}

