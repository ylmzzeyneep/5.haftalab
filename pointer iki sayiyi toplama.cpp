#include <stdio.h>
int main(){
	int x,y, toplam;
	int *p;
	int *c;
	
	p = &x;
	c = &y;
	
	printf("ilk sayiyi giriniz:");
	scanf("%d", &x);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d", &y);
	
	toplam= *p + *c;
	printf("\n Toplam:%d", toplam);
	
	return 0;
}
