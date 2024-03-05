#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

/*  Loop Pertama (i): Loop pertama akan berjalan selama i kurang dari atau sama dengan 3.
    Setiap iterasi loop pertama, program akan mencetak “Bilangan utama: [nilai i]”.
    Nilai i akan digunakan sebagai bilangan utama dalam perkalian.

    Loop Kedua (j): Loop kedua akan berjalan selama j kurang dari atau sama dengan 2.
    Setiap iterasi loop kedua, program akan mencetak “Bilangan pengali: [nilai j]” dan “Hasil perkalian: [nilai i * j]”.
    Nilai j akan digunakan sebagai bilangan pengali dalam perkalian.
    
    Hasil perkalian i * j akan dicetak.*/