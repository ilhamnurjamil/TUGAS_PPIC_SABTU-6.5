#include <stdio.h>

int main() {
    float saldoAwal = 1000000;
    float bunga = 0.02;
    int bulan = 10;
    float saldoAkhir;

    for (int i = 1; i <= bulan; i++) {
        saldoAkhir = saldoAwal * (1 + bunga);
        saldoAwal = saldoAkhir;
    }

    printf("Saldo setelah %d bulan adalah Rp. %.2f\n", bulan, saldoAkhir);

    return 0;
}
