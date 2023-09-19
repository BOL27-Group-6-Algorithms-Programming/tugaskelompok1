#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat1[128];
    char kalimat2[128];
    char kalimat3[128];
    char gabunganKalimat[500];

    printf("\nKalimat 1 = ");
    scanf("%s", kalimat1);

    printf("Kalimat 2 = ");
    scanf("%s", kalimat2);

    printf("Kalimat 3 = ");
    scanf("%s", kalimat3);

    printf("\nKalimat yang diterima: %s %s %s\n", kalimat1, kalimat2, kalimat3);
    snprintf(gabunganKalimat, sizeof(gabunganKalimat), "%s %s %s", kalimat1, kalimat2, kalimat3);

    printf("Gabungan 3 buah inputan kalimat = %s\n", gabunganKalimat);

    char hasilMembalikKalimatGabungan[sizeof(gabunganKalimat)];

    int panjangKalimatGabungan = strlen(gabunganKalimat);

    for (int i = 0, j = panjangKalimatGabungan - 1; i < (panjangKalimatGabungan / 2); i++, j--)
    {
        char temp = gabunganKalimat[j];
        gabunganKalimat[j] = gabunganKalimat[i];
        gabunganKalimat[i] = temp;
    }

    long totalJumlahHuruf = strlen(kalimat1) + strlen(kalimat2) + strlen(kalimat3);

    printf("Hasil membalik kalimat gabungan = %s\n\n", gabunganKalimat);
    printf("Jumlah Huruf kalimat pertama = %lu\n", strlen(kalimat1));
    printf("Jumlah Huruf kalimat kedua = %lu\n", strlen(kalimat2));
    printf("Jumlah Huruf kalimat ketiga = %lu\n", strlen(kalimat3));
    printf("Total Jumlah huruf = %lu\n", totalJumlahHuruf);
}