#include <stdio.h>

int main() {
	
	puts("Program Konversi Kilometer ke Meter dan Sentimeter");
	puts("--------------------------------------------------");
	printf("\n\n");
	
    double kilometer, meter, centimeter;

    // input jarak dalam kilometer
    printf("Masukkan jarak dalam kilometer: ");
    scanf("%lf", &kilometer);

    // konversi ke meter dan centimeter
    meter = kilometer * 1000; 
    centimeter = kilometer * 100000;

    // hasil konversi
	printf("\n\n");
    puts("Hasil Konversi:");
    printf("%.2lf kilometer sama dengan %.2lf meter\n", kilometer, meter);
    printf("%.2lf kilometer sama dengan %.2lf centimeter\n", kilometer, centimeter);
    printf("\n\n");


	system("pause");
    return 0;
}
