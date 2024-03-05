#include<stdio.h>

int Sisi;
int Hitung(int Sisi){
    int Vol,Kel,Luas;
    Vol = Sisi * Sisi * Sisi;
    Kel = 4 * Sisi;
    Luas = Sisi * Sisi;
    return printf("Volume Kubus: %d\nKeliling Persegi: %d\nLuas Persegi: %d", Vol,Kel,Luas);
}

int main(){
    printf("Masukkan Sisi: ");
    scanf("%d", &Sisi);

    Hitung(Sisi);

return 0;
}