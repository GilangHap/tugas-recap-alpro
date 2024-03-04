#include <stdio.h>

int main(){
    int transaksi;
    int pengeluaran = 0; 

    scanf("%d", &transaksi);
    
    if(transaksi <= 0){
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }

    else { 
        for(int i = 0;i< transaksi; i++){
        int nominal;
        scanf("%d", &nominal );
        pengeluaran += nominal;
    }
    }

    printf("%d\n", pengeluaran);
    return 0;

}