/*
1 +11 + 111 + 1111 + ... n terime sahip seriyi 
ekrana yazd�ran ve toplam�n� bulup onu 
da ekrana yazd�ran C kodunu tamamlay�n�z.

�rnek ��kt� : 

Serinin terim sayisini girin : 5 
1 + 11 + 111 + 1111 + 11111 + 
Serinin toplami : 12345

*/
#include<stdio.h>
int main(){
	int i,n,b,toplam=0;
	printf("Serinin terim sayisini girin :");
	scanf("%d",&n);
	b=1;
	for(i=1;i<=n;i++){
	   printf("%d + ",b);
	   toplam=toplam+b;
	   b=b*10+1;
	}
	printf("\nToplam : %d",toplam);
	return 0;
}

