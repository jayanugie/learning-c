#include <stdio.h>

int main() {
	
	puts("PROGRAM MENGHITUNG DISKON BELANJA");
	puts("=================================");
	printf("\n");
	
    int numTransactions;
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &numTransactions);
	
	printf("\n");
	
    float transactions[numTransactions];
    float total = 0;
    
	int i;
    for (i = 0; i < numTransactions; i++) {
        printf("Masukkan nilai transaksi ke-%d: ", i + 1);
        scanf("%f", &transactions[i]);
        total += transactions[i];
    }

    float discount = 0;
    
    for (i = 0; i < numTransactions; i++) {
        if (transactions[i] >= 200000 && transactions[i] <= 500000) {
            discount += transactions[i] * 0.10;
        } else if (transactions[i] > 500000 && transactions[i] <= 1000000) {
            discount += transactions[i] * 0.20;
        } else if (transactions[i] > 1000000) {
            discount += transactions[i] * 0.30;
        }
    }
    
    float totalPrice = total - discount;
    
    float discountSpecial = totalPrice * 0.20;
    float totalPriceSpecial = total - discount - discountSpecial;

  	printf("\n---------------------------------\n\nRekap Transaksi\n");
    printf("Total belanja: %.0f\n", total);
   	printf("Total diskon setiap transaksi: %.0f\n", discount);
	
	if (numTransactions >= 4) {
	    printf("Spesial diskon 4 kali transaksi: %.0f\n", discountSpecial);
		printf("\nHARGA AKHIR: %.0f\n\n", totalPriceSpecial);
    } else {
    	printf("\nHARGA AKHIR: %.0f\n\n", totalPrice);
	}
	
	system("pause");
    return 0;
}

