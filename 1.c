//Lab 23.02.2022 3.Hafta 1.soru

#include<stdio.h>


toplam(int n) {
	
	if(n== 0) {
		return 0;
	}
	
	else {
		return n + toplam(n-1);
	}	
}



int main() {
	
	int sayi;
	printf("Bir sayi giriniz.\n");
	scanf("%d",&sayi);
	
	printf("Girdiginiz sayiya kadar olan toplam: %d",toplam(sayi));
	
	return 0;
	
}
