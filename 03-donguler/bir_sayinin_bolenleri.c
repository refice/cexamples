/*
Kullanıcının girdiği bir 
n tam sayısınin bolenlerini ekrana yazdirin
*/
#include<stdio.h>
int main(){
	int n,i;
	printf("Bir tam sayi giriniz :");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
	
	return 0;
}
