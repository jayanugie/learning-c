/*
	Rancanglah program terstruktur untuk persoalan berikut ini, dan pastikan anda menggunakan formatted input dan formatted output yang tepat dan user-friendly.
	
	"Dalam mata kuliah Pengelolaan Bisnis Brokering Real-Estate terdapat 100 mahasiswa yang menempuh ujian. 
	Anda diminta membuat program untuk meringkas hasil ujian tersebut. Anda diberikan daftar 100 mahasiswa tersebut. 
	Kemudian, untuk setiap nama, label angka 1 dituliskan jika mahasiswa lulus ujian, dan label angka 2 jika mahasiswa gagal ujian.
	
	Program perlu menganalisa hasil ujian sebagai berikut:
	1. Input data hasil ujian (angka 1 atau 2) untuk masing-masing mahasiswa. Tampilkan pesan "Nama" dan “Masukkan hasil” setiap kali program meminta data berikutnya.
	3. Tampilkan nama masing-masing mahasiswa beserta hasil ujiannya.
	2. Hitunglah jumlah masing-masing jenis hasil (yaitu, berapa yang lulus dan berapa yang gagal).
	4. Jika jumlah kelulusan lebih dari 80 persen, maka tampilkan pesan “Kelulusan kelas telah mencapai target!”
*/

#include <stdio.h>

int main() {
	
	puts("MENGHITUNG PERSENTASE KELULUSAN MAHASISWA");
	puts("-----------------------------------------");
	puts("Silakan masukkan nama dan hasil ujian dengan nilai 1 atau 2.");
	puts("1 untuk mahasiswa lulus, 2 untuk mahasiswa tidak lulus.");
	
    char nama[100][50];
    int hasil_ujian[100];
    int kelulusan_count = 0;
    int total_mahasiswa = 100;

    // menerima input nama dan hasil ujian
    int i;
    for (i = 0; i < total_mahasiswa; i++) {
        printf("\nMasukkan nama siswa %d: ", i + 1);
        scanf("%s", nama[i]);
        
        int input;
        do {
            printf("Masukkan hasil ujian untuk %s: ", nama[i]);
            scanf("%d", &input);
            if (input != 1 && input != 2) {
                printf("Input tidak valid. Harap masukkan nilai 1 atau 2.\n");
            }
        } while (input != 1 && input != 2);
        
        hasil_ujian[i] = input;	

        // jika nilai 1 masukkan pada variabel jumlah kelulusan
        if (hasil_ujian[i] == 1) {
            kelulusan_count++;
        }
    }

    // menghitung persentase kelulusan
    float persentase_kelulusan = (float)kelulusan_count / total_mahasiswa * 100;
    printf("\nJumlah yang lulus: %d\n", kelulusan_count);
    printf("Jumlah yang tidak lulus: %d\n", total_mahasiswa - kelulusan_count);

    // Menampilkan pesan berdasarkan persentase kelulusan
    if (persentase_kelulusan >= 80) {
        printf("Kelulusan telah mencapai target. Persentase kelulusan: %.2f%%\n", persentase_kelulusan);
    } else {
        printf("Kelulusan belum mencapai target. Persentase kelulusan: %.2f%%\n", persentase_kelulusan);
    }

    return 0;
}

