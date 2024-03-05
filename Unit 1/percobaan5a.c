#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

/*Kalau untuk yang menggunakan scanf program akan membaca satu kata saja. Jika kita menginputkan lebih dari 1 kata
maka program tersebut hanya akan menampilkan 1 kata saja*/