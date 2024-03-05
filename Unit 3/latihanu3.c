#include<stdio.h>

int main(){
    int JmlElm,JmlAng = 0;
    printf("Jumlah elemen yang dimasukan pada array: ");
    scanf("%d", &JmlElm);

    int Angka[JmlElm];
    for(int i = 0;i<JmlElm;i++){
        printf("Masukkan nilai angka ke %d : ", i+1);
        scanf("%d", &Angka[i]);
        JmlAng += Angka[i];
    }

    printf("Hasil penjumlahan seluruh elemen pada array adalah %d", JmlAng);

return 0;
}