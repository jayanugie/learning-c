#include <stdio.h>

int main() {

    int a = 1;
    int b = 0;
    int hasil;

	// operator aritmatika (tambah, kurang, kali, bagi)
    hasil = a * b;
    printf("Hasil perkalian: %d\n", hasil);

    // operator pembanding (==, >, <, etc)
    if (a > b) {
    	puts("a lebih besar dari b");
	} else {
		puts("a tidak lebih besar dari b");
	}

	// operator logika (&&, ||, etc)
	hasil = a || b;
    printf("Hasil dari a || b: %d\n", hasil);

    // operator penugasan (memberikan nilai ke variabel)
    b = 1; 
    printf("Nilai baru b: %d\n", b);
    
    int n = 10;
    int sum = 0;

    // loop untuk menjumlahkan angka dari 1 hingga 10
    int i;
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Jumlah angka dari 1 hingga 10 adalah: %d\n", sum);


    return 0;
}

