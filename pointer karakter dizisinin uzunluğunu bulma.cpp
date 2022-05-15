#include <stdio.h>
int main(){
	char *str="1234567890";
	char *p1;
	
	p1 = str;
	
	int uzunluk = 0;
	while(*p1 != '\0'){
		uzunluk++;
		p1++;
	}
    printf("%d", uzunluk);
}
