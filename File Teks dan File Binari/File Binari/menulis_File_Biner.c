#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE * fptr;
    char bufferedwriter[300];
    // Membuat 
    if((fptr = fopen("file_biner.bin", "rb")) == NULL){
        printf("File tidak ditemukan -_-");
        return EXIT_FAILURE;
    }

    printf("Masukkan kalimat: ");
    scanf("%[^\n]s", bufferedwriter);
    getchar();
    fptr = fopen("file_biner.bin","wb");
    if(bufferedwriter != '\0'){
         fwrite(bufferedwriter, sizeof(char), sizeof(bufferedwriter) / sizeof(char), fptr);
    }
    // Wajib tutup setelah dibuka!
    fclose(fptr);

    return EXIT_SUCCESS;
}