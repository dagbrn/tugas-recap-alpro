#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

/*Kalau untuk yang menggunakan fgets program akan membaca satu baris kalimat. Jika kita menginputkan lebih dari 1 kata
maka program tersebut akan menampilkan 1 baris kata tersebut*/