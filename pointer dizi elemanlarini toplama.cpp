#include <stdio.h>
int main(){
	int i, n;
	int toplam = 0;
	int dizi[100];
	int *dizip;
	
	dizip = dizi;
	
	printf("bir eleman sayisi giriniz:");
	scanf("%d", &n);
	
    for(i=0; i<n; i++){
	    printf("dizi[%d]:", i);
		scanf("%d", &dizi[i]);
	}
	
	for(i=0; i<n; i++){
	   printf("%d\n", *dizip);
	   toplam = toplam + *dizip;
	   dizip ++;
}
	printf("%d", toplam);
    return 0;
}
