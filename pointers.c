#include <stdio.h>

void tambahSepuluh(int *angka)
{
    *angka += 10; // perubahan variabel
}

int main()
{
    int number = 42;
    int *ptr = &number; // Menginisialisasi pointer

    printf("Nilai variabel: %d\n", number);
    printf("Alamat variabel: %p\n", &number);
    printf("Nilai yang ditunjuk oleh pointer: %d\n", *ptr);
    printf("Alamat yang ditunjuk oleh pointer: %p\n", ptr);

    *ptr = 100; // Mengubah nilai melalui pointer
    printf("Setelah diubah melalui pointer: %d\n", number);

    printf("Nilai number: %d\n", number);

    tambahSepuluh(&number);
    printf("Setelah fungsi: %d\n", number);

    return 0;
}
