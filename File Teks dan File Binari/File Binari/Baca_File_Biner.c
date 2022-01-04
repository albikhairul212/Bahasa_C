#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fptr;

    if(fptr = fopen("file_biner.bin", "rb") == NULL){
        printf("File tidak ditemukan -_-");
        return EXIT_FAILURE;
    }

    
}