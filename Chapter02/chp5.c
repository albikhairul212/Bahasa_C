#include <stdio.h>

int main()
{
    char nama[50];
    char akun[50];
    char jurusan[50];
    int usia = 0;

    printf("Masukan Nama Anda :");
    gets(nama);
    printf("Masukan Nama Instagram Anda :");
    gets(akun);
    printf("Masukan Nama Jurusan Anda :");
    gets(jurusan);
    printf("Masukan Usia Anda :");
    gets(usia);

printf("\n=========================================\n");
printf("Nama    : %s \n", nama);
printf("IG      : %s \n", akun);
printf("Jurusan : %s \n", jurusan);
printf("Usia    : %i \n", usia);
printf("=========================================\n");

    return 0;
}
