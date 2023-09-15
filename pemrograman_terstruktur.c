#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    // statement if untuk melakukan pemilihan kondisional
    if (angka > 0) {
        printf("Angka yang Anda masukkan adalah positif.\n");
    } else if (angka < 0) {
        printf("Angka yang Anda masukkan adalah negatif.\n");
    } else {
        printf("Angka yang Anda masukkan adalah nol.\n");
    }

    // statement for untuk melakukan perulangan
    printf("Mencetak angka dari 1 hingga %d dengan for loop:\n", angka);
    int i;
    for (i = 1; i <= angka; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // statement while untuk melakukan perulangan dengan kondisi
    int counter = 1;
    printf("Mencetak angka dari 1 hingga %d dengan while:\n", angka);
    while (counter <= angka) {
        printf("%d ", counter);
        counter++;
    }
    printf("\n");

    return 0;
}

