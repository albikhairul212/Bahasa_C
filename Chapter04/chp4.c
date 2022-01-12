#include <stdio.h>

void main(){
    int a, b;

    printf("Inputkan nilai a: ");
    scanf("%i", &a);

    printf("Inputkan nilai b: ");
    scanf("%i", &b);

    // true = 1
    // false = 0

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // logika AND
    printf("a && b = %d\n", a && b);

    // logika OR
    printf("a || b = %d\n", a || b);

    // logika NOT
    printf("!a = %d\n", !a);
}