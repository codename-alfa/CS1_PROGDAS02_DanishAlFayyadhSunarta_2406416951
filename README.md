---
title: CS1_PROGDAS02_DanishAlFayyadhSunarta_2406416951

---

# Case Study I - Dasar C
> Pembuat Soal: 
```
Nama  : Danish Al Fayyadh Sunarta
NPM   : 2406416951
```
---
<center><img src="https://upload.wikimedia.org/wikipedia/commons/thumb/0/00/USDnotesNew.png/800px-USDnotesNew.png" width="300 px"/></center>
<br>
Karena bisnisnya yang sukses dalam ranah internasional, Ryan kini memiliki sejumlah lembar dolar AS dengan denominasi $1, $2, $5, dan $10. Ryan berniat untuk menukarakan uang-uang tersebut ke rupiah jika berjumlah setidaknya $100. Untuk meningkatkan efisiensi bisnis, Ryan merekrut anda untuk menciptakan sebuah program yang dapat menghitung uangnya.
<br><br>
Ryan meminta anda untuk menciptakan program yang pertama-tama menerima 4 buah input, jumlah lembar masing-masing denominasi yang dimiliki Ryan. Program lalu harus mengeluarkan total uang dolar yang dimiliki Ryan. 
<br><br>
Setelah menghitung total uang yang dimiliki, jika total uang Ryan sudah melebihi $100, maka Ryan akan memasukkan nilai tukar USD ke IDR pada hari itu dan program akan mengeluarkan nominal hasil tukar uang Ryan dari dolar AS (USD) ke rupiah (IDR).

#### Contoh Program
![Contoh 1](https://i.imgur.com/PLQhoK6.png)  
Ryan memiliki 2 lembar \$1, 3 lembar \$2, 2 lembar \$5, dan 4 lembar \$10. Jumlah total uang Ryan berjumlah $58. Program selesai.

![Contoh 2](https://i.imgur.com/OpDzBjF.png)  
Jumlah total uang Ryan sebesar \$123. Jumlah tersebut telah melebihi $100 maka nilai tukar sebesar Rp15000 dimasukkan dan program menghasilkan total uang Ryan dalam rupiah sebsar Rp1845000,00.

![Contoh 3](https://i.imgur.com/X7Dy2Ti.png)  

#### Test Case
<table>
    <tr>
        <th>Input</th>
        <th>Output</th>
    </tr>
    <tr>
        <th>2 <br> 3 <br> 2 <br> 4</th>
        <th>58</th>
    </tr>
    <tr>
        <th>10 <br> 4 <br> 5 <br> 8 <br> 15000</th>
        <th>123 <br> 1845000.00</th>
    </tr>
    <tr>
        <th>0 <br> 5 <br> 16 <br> 1 <br> 16342.15</th>
        <th>100 <br> 1634215.00</th>
    </tr>
    <tr>
        <th>9 <br> 2 <br> 0 <br> 1</th>
        <th>23</th>
    </tr>
</table>

---
```c

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

```
#### Screenshot Program Berjalan:
![image](https://hackmd.io/_uploads/rkNIl-jtJg.png)


#### Kesimpulan:
- kami mempelajari input-output dasar, seperti printf dan scanf.
- kami mempelajari if-statement.
- saya menyadari bahwa variabel yang merupakan hasil olahan dari variabel lain yang valuenya didapat dari input, sebaiknya ditulis setelah input diterima. 
---
