#include<stdio.h>

/* Variabel J merepresentasikan Jarak, W untuk Waktu, dan K untuk Kecepatan. */

int main(){
    int j1,j2,w1,w2,k1,k2;
    scanf("%d %d", &j1, &w1);
    scanf("%d %d", &k1, &w2);
    scanf("%d %d", &j2, &k2);

    if(w1 == 0 || w2 == 0 || k2 == 0){
        printf("Pembagi tidak boleh nol.\n");
        return 1;
    }
    float k = (float) j1 / w1;
    float j = (float) k1 / w2;
    float w = (float) j2 / k2;

    printf("%.2f\n", k);
    printf("%.2f\n", j);
    printf("%.2f", w);

return 0;
}