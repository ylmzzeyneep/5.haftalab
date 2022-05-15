#include <stdio.h>
int main(){
	int n, i;
	int dizi[100];
	int *dizip;
	dizip=dizi;
	
	printf("eleman sayisi girin:");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", & dizi[i]);
	}
	for(i=0; i<n; i++){
		printf("\n %d ", *dizip);
		dizip++;}
			
	return 0;
}
