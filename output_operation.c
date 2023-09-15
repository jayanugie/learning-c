#include <stdio.h>

int main() {
	    
    // printf()
	printf("hello world using printf\n");
	
	// puts() - automatic add newline
	puts("hello world using puts");
	
	
	/*
		putchar() - return 1 char	 
		kalau variable ch ada dua huruf atau lebih (misal 'Ab'),
		maka hanya akan mencetak huruf terakhir dari variabel ch.
	*/
	char ch = 'Abc';
	putchar(ch);
	
	printf("\n");
	
	
	/*
		fprintf()
		fungsi untuk mencetak data ke dalam file		
	*/
	FILE *file = fopen("output.txt", "w");
	if (file != NULL) {
		fprintf(file, "tulisan ini akan disimpan dalam file\n");
		fprintf(file, "tulisan ini juga");
		fclose(file);
	}
    
    
    /*
		sprintf()
		menyimpan output dalam string, bukan mencetaknya ke layar
	*/
	char buffer[50];
    int num = 123;
    
    sprintf(buffer, "Nilai num adalah: %d", num); // menyimpan num pada buffer
    
    printf("%s\n", buffer);
    
    return 0;
}

