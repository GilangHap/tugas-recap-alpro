#include <stdio.h>

int main(){
    int array;
    int tambah[array];
    int jumlah = 0;

    scanf("%d", &array );

    for(int i = 0; i< array; i++){
        scanf("%d", &tambah[i]);
    }

    for (int i = 0; i < array; i++){
        jumlah += tambah[i];
    }

    printf("%d\n", jumlah);

    return 0;
}
