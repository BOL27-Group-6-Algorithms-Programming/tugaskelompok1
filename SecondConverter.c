#include <stdio.h>

int main()
{
    int td, j, m, d;

    printf("Masukkan total detik: ");
    scanf("%d", &td);

    j = td / 3600; // Menghitung jam
    td %= 3600;    // Sisa detik setelah menghitung jam
    m = td / 60;   // Menghitung menit
    d = td % 60;   // Sisa detik setelah menghitung menit

    printf("Hasil konversi: %d jam, %d menit, %d detik.\n", j, m, d);

    return 0;
}