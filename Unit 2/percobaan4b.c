#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}


/*  Loop Pertama (i): Loop pertama akan berjalan dari i = 2 hingga i = 3.
    Setiap iterasi loop pertama, program akan mencetak “Bilangan utama: [nilai i]”.
    Nilai i akan digunakan sebagai bilangan utama dalam perkalian.
    
    Loop Kedua (j): Loop kedua akan berjalan dari j = 1 hingga j = 2.
    Setiap iterasi loop kedua, program akan mencetak “Bilangan pengali: [nilai j]” dan “Hasil perkalian: [nilai i * j]”.
    Nilai j akan digunakan sebagai bilangan pengali dalam perkalian.
    
    Hasil perkalian i * j akan dicetak.*/