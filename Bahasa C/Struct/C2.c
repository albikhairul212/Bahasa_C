#include <stdio.h>

struct KRS
{
    char matakuliah[20];
    char kode[6];
    int semester;
};

int main(){
    struct KRS krs1, krs2;

    printf("Matakuliah\t: ");
    scanf(" %[^\n]%*c", &krs1.matakuliah);
    printf("Kode MK\t\t: ");
    scanf(" %s", &krs1.kode);
    printf("Semester\t: ");
    scanf(" %d", &krs1.semester);

    printf("\n## KRS Ke-1 ##\n");
    printf("Matakuliah\t: %s\n", krs1.matakuliah);
    printf("Kode MK\t\t: %s\n", krs1.kode);
    printf("Semester\t: %d\n\n", krs1.semester);

    printf("\nMatakuliah\t: ");
    scanf(" %[^\n]%*c", &krs2.matakuliah);
    printf("Kode MK\t\t: ");
    scanf(" %s", &krs2.kode);
    printf("Semester\t: ");
    scanf(" %d", &krs2.semester);

    printf("\n## KRS Ke-2 ##\n");
    printf("Matakuliah\t: %s\n", krs2.matakuliah);
    printf("Kode MK\t\t: %s\n", krs2.kode);
    printf("Semester\t: %d\n", krs2.semester);

    return 0;
}