#include <stdio.h>

int main()
{
    char nama[50];
    int jumlah;

    printf("=========================\n");
    
    printf("masukan nama anda :");
    scanf("%[^\n]s", &nama);
    printf("masukan Jumlah Uang anda :");
    scanf("%i", &jumlah);

    // menggunakan pernyataan bersyarat
    if(jumlah > 100000){
        printf("selamat anda orang kaya");
    }
printf("Terima Kasih");

    return 0;
}
