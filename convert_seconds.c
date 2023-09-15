#include <stdio.h>
int main()
	{
	    int total_detik, menit, jam, detik;
	
	    printf("=====================================\n");
	    printf("|   PROGRAM KONVERSI DETIK MENIT JAM  |\n");
	    printf("-------------------------------------\n");
	    
	    printf("Total Detik: ");
	    scanf("%d", &total_detik);
	    
		jam = total_detik / 3600;
		menit = (total_detik % 3600) / 60;
		detik = total_detik - (jam * 3600) - (menit *60);
	   
	    printf("Nilai konversi sebagai berikut....\n");
	    
	    printf("Konversi total detik %d jam = %d menit = %d detik\n", jam, menit, detik);

		system("pause");
		return 0;
}
