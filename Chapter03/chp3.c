#include <stdio.h>

int main()
{
    char nama[50], doi[50];
    int jumlah;

    printf("=========================\n");
    
    printf("masukan nama anda :");
    scanf("%[^\n]s", &nama);
    
    printf("masukan nama DOI anda :");
    scanf("%[^\n]s", &doi);

    printf("dari 1 sampai 5\n");
    printf("masukan jumlah cinta anda :");
    scanf("%i", &jumlah);

    if (jumlah == 5) {
        printf("Cinta Mati");
    } else if (jumlah == 4) {
        printf("Cinta Biasa");
    } else if (jumlah == 3) {
        printf("Cinta Monyet");
    } else if (jumlah == 2) {
        printf("Cinta Alay");
        }else{
            printf("Baru Jatuh Cinta");
        }
        
    return 0;
}
