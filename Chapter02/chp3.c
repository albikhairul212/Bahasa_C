#include <stdio.h>

int main()
{
    char nama[50];
    char akun[50];
    char jurusan[50];
    int usia = 0;

    printf("Masukan Nama Anda :");
    scanf("%s", &nama);
    printf("Masukan Nama Instagram Anda :");
    scanf("%s", &akun);
    printf("Masukan Nama Jurusan Anda :");
    scanf("%s", &jurusan);
    printf("Masukan Usia Anda :");
    scanf("%i", &usia);

printf("=========================================\n");
printf("Nama    : %s \n", nama);
printf("IG      : %s \n", akun);
printf("Jurusan : %s \n", jurusan);
printf("Usia    : %i \n", usia);
printf("=========================================\n");

    return 0;
}
