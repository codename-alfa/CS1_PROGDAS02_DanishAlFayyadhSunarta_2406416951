#include <stdio.h>

void author() {
    printf("Author  : Danish Al Fayyadh Sunarta\n");
    printf("NPM     : 2406416951\n");
    printf("---------------------------------------\n\n");
}

int main() {
    author();
    
    int a, b, c, d, nilai, hasil, sum;

    printf("KALKULATOR USD\n");
    printf("Jumlah $1   : ");
    scanf("%d", &a);
    printf("Jumlah $2   : ");
    scanf("%d", &b);
    printf("Jumlah $5   : ");
    scanf("%d", &c);
    printf("Jumlah $10  : ");
    scanf("%d", &d);
    sum = (a*1) + (b*2) + (c*5) + (d*10);
    printf("------------------\n");
    printf("Total       : %d\n", sum);
    
    if(sum >= 100) {
        printf("Nilai Tukar : ");
        scanf("%d", &nilai);
        hasil = sum * nilai;
        printf("Hasil Tukar : %d\n", hasil);
    }
    return 0;
}
