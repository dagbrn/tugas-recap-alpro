#include <stdio.h>

int main() {
    int JmlTrs, i, Trs, Total = 0;

    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &JmlTrs);

    if (JmlTrs <= 0) {
        printf("Tidak ada transaksi hari ini");
        return 0;
    }

    for (i = 1; i <= JmlTrs; ++i) {
        printf("Masukkan nominal transaksi ke-%d: ", i);
        scanf("%d", &Trs);
        Total += Trs;
    }

    printf("Total pengeluaran hari ini: %d", Total);

    return 0;
}
