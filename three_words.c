#include <stdio.h>
#include <string.h>

void rev(char *a, int b){
    int i,temp;
    for(i=0;i<b/2;i++){
        temp=a[i];
        a[i]=a[b-1-i];
        a[b-1-i]=temp;
    }
}


int main() {
	
	// inisiasi variable
	char kata1[100], kata2[100], kata3[100], gabungan[300], gabungan_terbalik[300];
	int jumlah_huruf1, jumlah_huruf2, jumlah_huruf3, total_jumlah_huruf;

	// judul program
	printf("=====================================\n");
    printf("|   PROGRAM YANG MENERIMA 3 KATA  |\n");
    printf("-------------------------------------\n");

	// KALIMAT 1
	
	// perintah agar user memasukan kata
    printf("Masukkan Kata 1: ");
    fgets(kata1, sizeof(kata1), stdin);
	kata1[strcspn(kata1, "\n")] = '\0';
    
    // kondisi jika user input lebih dari 1 kata
    if (strchr(kata1, ' ') != NULL) {
    	printf("Kata 1 hanya bisa satu kata\n");
    	return 1;
	} 

	// KALIMAT 2
    printf("Masukkan Kata 2: ");
    fgets(kata2, sizeof(kata2), stdin);
	kata2[strcspn(kata2, "\n")] = '\0';
    
    if (strchr(kata2, ' ') != NULL) {
    	printf("Kata 2 hanya bisa satu kata\n");
    	return 1;
	}


	// KALIMAT 3
    printf("Masukkan Kata 3: ");
    fgets(kata3, sizeof(kata3), stdin);
	kata3[strcspn(kata3, "\n")] = '\0';
    
    if (strchr(kata3, ' ') != NULL) {
    	printf("Kata 3 hanya bisa satu kata\n");
    	return 1;
	}

	// inisiasi variable gabungan -> agar tidak ada karakter random pada output
	gabungan[0] = '\0';

	// proses penggabungan
    strcat(gabungan, kata1);
    strcat(gabungan, " ");
    strcat(gabungan, kata2);
    strcat(gabungan, " ");
    strcat(gabungan, kata3);

	// proses penjumlahan
    jumlah_huruf1 = strlen(kata1);
    jumlah_huruf2 = strlen(kata2);
    jumlah_huruf3 = strlen(kata3);
    rev(kata1, jumlah_huruf1);
    rev(kata2, jumlah_huruf2);
    rev(kata3, jumlah_huruf3);
    
    total_jumlah_huruf = jumlah_huruf1 + jumlah_huruf2 + jumlah_huruf3;

	// output
    printf("\nHASIL OUTPUT\n\n");
    printf("  Gabungan 3 buah inputan kata = %s\n", gabungan);
    printf("  Hasil membalik kata gabungan = %s %s %s\n", kata3, kata2, kata1);
    printf("  Jumlah huruf kata pertama = %d\n", jumlah_huruf1);
    printf("  Jumlah huruf kata kedua = %d\n", jumlah_huruf2);
    printf("  Jumlah huruf kata ketiga = %d\n", jumlah_huruf3);
    printf("  Total jumlah huruf = %d\n", total_jumlah_huruf);

	system("pause");
    return 0;

}
