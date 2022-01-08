#include <stdio.h>

int main()
{

    char grade;

    printf("Inputkan grade: ");
    scanf("%d", &grade);

    switch (toupper(grade)){
        case 'A':
            printf("Luar biasa!\n");
            break;
        case 'b':
        case 'c':
            printf("Bagus!\n");
            break;
        case 'd':
            printf("Anda lulus\n");
            break;
        case 'e':
        case 'F':
            printf("Anda remidi\n");
            break;
        default:
            printf("Grade Salah!\n");
    }

    return 0;
}
