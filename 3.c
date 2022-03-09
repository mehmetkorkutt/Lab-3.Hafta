//Lab 23.02.2022 3.Hafta 3.soru

//Main fonksiyonu içinde verilen sayýnýn basamaklarýnýn toplamýný rekürsif bir fonksiyon kullanarak bulunuz.

#include<stdio.h>


int toplam(int n) {
	
	if( n == 0) {
		return 0;
	}

	else {
		return n%10 + toplam(n/10);
	}

}

	int main() {
	
	int x,sayi;
	printf("Bir sayi giriniz.");
	scanf("%d",&sayi);

	
	printf("%d",toplam(sayi));
	
	return 0;
	
	
	
}
	
	
	

	
	

