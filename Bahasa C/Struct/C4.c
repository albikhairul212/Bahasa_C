#include <stdio.h>

struct mahasiswa
{
    char nama[50];
    int nim;
    int angkatan; 
};

int main(){
    struct mahasiswa mhs[2];
    printf("-- Input Data Mahasiswa --\n");
    for(int i = 0; i < 2; i++){
        printf("Data ke-%i\n", i+1);
        printf("Nama\t : ");
        scanf("%s", &mhs[i].nama);
        printf("NIM\t : ");
        scanf("%d", &mhs[i].nim);
        printf("Angkatan : ");
        scanf("%d", &mhs[i].angkatan);
        printf("\n");
    }

    printf("-- Data Mahasiswa --\n");
    printf("| NO | Nama\t | NIM\t | Angkatan\t |\n");
    for(int i =0; i < 2; i++){
        printf("| %i  | %s\t | %d\t | %d\t\t |\n", i+1, mhs[i].nama, mhs[i].nim, mhs[i].angkatan);
    }
}
