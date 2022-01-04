#include <stdio.h>

typedef struct Belanja
{
    char *barang;
    int jumlah;
    int harga;
}isiBelanja;

int main(){
    isiBelanja belanja1, belanja2;

    belanja1.barang = "Tomat";
    belanja1.jumlah = 10;
    belanja1.harga = 30000;

    belanja2.barang = "Wortel";
    belanja2.jumlah = 5;
    belanja2.harga = 10000;

    printf("** Belanjaan Ke-1 **\n");
    printf("Barang\t: %s\n", belanja1.barang);
    printf("Jumlah\t: %d\n", belanja1.jumlah);
    printf("Harga\t: %d\n", belanja1.harga);

    printf("\n** Belanjaan Ke-2 **\n");
    printf("Barang\t: %s\n", belanja2.barang);
    printf("Jumlah\t: %d\n", belanja2.jumlah);
    printf("Harga\t: %d\n", belanja2.harga);

    return 0;
}