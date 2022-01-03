#include <stdio.h>

int main(){
    // DEKLARASI ARRAY
    int arr[] = {1,2,3,4,5};

    // Menghitung panjang array
    int panjang_arr = sizeof(arr) / sizeof(*arr);
    // Mencetak array dari index pertama hingga akhir
    for(int i = 0; i < panjang_arr; i++){
        printf("%d\n",arr[i]);
    }
    /* OUTPUT:
                1
                2
                3
                4
                5                    */
}