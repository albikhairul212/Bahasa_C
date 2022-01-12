#include <stdio.h>

int main()
{
    
    char rambu;

    printf("====================\n");
    printf("m = merah \nk = kuning \nh = hijau\n");
    printf("====================\n");
    printf("Masukan Warna rambu-rambu lalu lintas : ");
    scanf("%c" , &rambu);

    switch (toupper(rambu))
    {
    case 'M':
    printf("Berhenti");
        break;
    case 'K':
    printf("Berhati-hati");
        break;
    case 'H':
    printf("jalan");
        break;

    default:
    printf("Warna Yang anda input salah");

    }

    
    return 0;
}
