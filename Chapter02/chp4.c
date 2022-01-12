#include <stdio.h>

int main()
{
    char nama[50];
    char akun[50];
    char jurusan[50];

    printf("Masukan Nama Anda :");
    fgets(nama, sizeof(nama), stdin);
    printf("Masukan Nama Instagram Anda :");
    fgets(akun, sizeof(akun), stdin);
    printf("Masukan Nama Jurusan Anda :");
    fgets(jurusan, sizeof(jurusan), stdin);

    printf("\n=========================================\n");
    printf("Nama    : %s \n", nama);
    printf("IG      : %s \n", akun);
    printf("Jurusan : %s \n", jurusan);
    printf("=========================================\n");

    return 0;
}
