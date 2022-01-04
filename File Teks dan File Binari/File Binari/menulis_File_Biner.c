#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE * fptr;
    char tulis_file[300];

    if((fptr = fopen("file_biner.bin", "rb")) == NULL){
        printf("File tidak ditemukan -_-");
        return EXIT_FAILURE;
    }

    printf("Masukkan kalimat: ");
    scanf("%[^\n]s", tulis_file);
    getchar();
    fptr = fopen("file_biner.bin","wb");
    if(tulis_file != '\0'){
         fwrite(tulis_file, sizeof(char), sizeof(tulis_file) / sizeof(char), fptr);
    }
    // Wajib tutup setelah dibuka!
    fclose(fptr);

    return EXIT_SUCCESS;
}