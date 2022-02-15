# T02 Control Structe

## Tugas 1 (t02_01.c, 40 points)
Toko yang di rintis Ucok dan Butet sejak dulu sudah semakin berkembang. Menjadi enterpreneur yang di cita-citakan sejak dulu sudah terwujud. Namun tidak cukup sampai disana, akhir-akhir ini Ucok sedang memikirkan sesuatu, suatu ide besar untuk menarik minat pelanggan. Kemudian Butet hadir dengan hasil riset yang dilakukannya beberapa minggu terakhir. Butet terinspirasi dari beberapa toko online yang penjualannya bisa mencapai ratusan buku per bulannya. Kemudian Butet memberitahu Ucok bahwa toko yang mereka rintis harus memberikan layanan dan penawaran terbaik bagi pelanggannya. Dari riset yang dilakukan Butet, penawaran terbaik dapat diwujudkan melalui pemberian diskon. 
Setelah dipikir-pikir, pemberian diskon merupakan ide yang luar biasa, Ucok pun setuju. Dari hasil diskusi yang mereka lakukan, maka didapatkan kesimpulan:
1. Setiap pembelian buku diatas 50,000 akan diberi potongan harga sebanyak 5%
2. Setiap pembelian diatas atau sama dengan 100,000 maka akan diberi potongan harga 10% 
3. Setiap pembelian diatas 500,000 akan diberi potongan 15%. 

Untuk mewujudkan ide cemerlang ini, Ucok dan Butet memerlukan bantuan Anda untuk membangun sebuah program yang membaca jumlah buku yang dibeli dan harganya. Berdasarkan masukan tersebut maka akan dihasilkan dua baris keluaran berupa total potongan yang didapatkan dan total yang akan dibayar setelah mendapatkan potongan. Perhatikan Example 1 dan Example 2.

### Example 1
Bontor sebagai pelanggan pertama toko mereka hari ini ingin membeli Buku Erlangga Terampil Berhitung Matematika Kelas 6 SD sebanyak ```5``` buku dengan harga per bukunya adalah ```50,000 ```. Maka Ucok akan input pada program:

```bash
5
50000

```
Kemudian pada program akan terlihat output berupa potongan harga yang diperoleh Bontor dan total yang akan dibayar setelah mendapatkan potongan:

```bash
25000.00
225000.00

```

### Example 2
Karena penawaran yang sangat menarik, keesokan harinya Bontor kembali ke toko untuk membeli Buku Cerita Rakyat Nusantara sebanyak ```3``` dengan harga per bukunya adalah ```50,000```. Maka Ucok akan input pada program:

```bash
3
5000

```

Kemudian pada program akan terlihat output berupa potongan harga yang diperoleh Bontor dan total yang akan dibayar setelah mendapatkan potongan, namun kali ini Bontor tidak memperoleh potongan karena total belanjanya kurang dari ```50.000```, maka output untuk total potongan yang akan ditampilkan akan digantikan dengan ```---``` (trippled dashes)

Output:
```bash
---      
15000.00

```

## Tugas 2 (t02_02.c, 20 points)

Pada hari senin kemarin, saat perjalanan ke rumah sakit untuk menjenguk temannya, Ucok bertemu seorang ahli gizi. Di dalam perjalanan, Ucok berbincang bersama sang Ahli gizi tersebut. Ucok ingin tahu lebih banyak mengenai makanan 4 sehat 5 sempurna yang sudah menjadi kampanye kesehatan sejak dahulu. 
Dari perbincangan bersama sang ahli gizi, Ucok mengetahui banyak hal baru, yaitu: 
1. Makanan pokok (staple food) biasanya memiliki kandungan karbohidrat yang bermanfaat sebagai sumber energi bagi tubuh. Kentang, Sagu, Gandum, Ubi, Singkong, atau Jagung merupakan jenis makanan pokok.
2. Lauk pauk (side dishes) merupakan bahan makanan yang mengandung kadar protein tinggi. Protein dapat diperoleh dari dua jenis makanan, yakni nabati dan hewani. 
3. Sayuran (vegetables) memiliki kandungan serat yang cukup tinggi sehingga baik untuk menjaga kesehatan saluran pencernaan. Selain itu sayuran juga mengandung berbagai vitamin dan mineral yang diperlukan oleh tubuh untuk bekerja dengan baik.
4. Ketika kita mengonsumsi buah (fruits), suplai energi dapat bertambah dengan cepat. Tambahan tenaga ini sangat penting untuk menghadapi jadwal yang padat.
5. Susu (milk) menjadi pelengkap dalam makanan 4 sehat 5 sempurna yang merupakan tambahan nutrisi. Kandungan susu yaitu kalsium yang bermanfaat untuk menjaga kesehatan tulang.

Selain itu, sang ahli gizi juga menyimpulkan menu makanan 4 sehat 5 sempurna tersebut:
1. Apabila kamu hanya makan makanan pokok, maka "you need side dishes".
2. Apabila kamu hanya makan makanan pokok dan lauk pauk, maka "you need vegetables".
3. Apabila kamu memakan sayur, "good".
4. Apabila kamu memakan buah, "very good".
5. Apabila kamu menambah susu, "perfect".

Setelah mendengar penjelasan sang ahli gizi, Ucok jadi ingin mengembangkan sebuah program yang menampilkan kategori menu makanan 4 sehat 5 sempurna tersebut.
Tugas Anda adalah membantu Ucok untuk mewujudkan keinginannya. Perhatikan Example 1 dan Example 2.


### Example 1
Jika Ucok memilih menu level 1, maka Ia akan input ```1``` pada program.

```bash
1
```

kemudian program akan menampilkan 2 baris keluaran, baris pertama merupakan menu level 1 yaitu staple food dan kesimpulannya "you need side dishes", contoh output berikut ini:

```bash
staple food
you need side dishes

```

### Example 2
Untuk contoh kedua, jika Ucok memilih menu level 3, maka Ia akan input ```3``` pada program.

```bash
3
```
kemudian program akan menampilkan menu level 3 dan kesimpulannya, contoh output berikut ini:

```bash
vegetables
side dishes
staple food
good

```


## Tugas 3 (t02_02.c, 40 points)

Kembangkanlah sebuah program yang akan menerima jenis operator ('+', '-',* ), pada baris kedua program akan menerima satu bilangan yang akan di operasikan.

### Example 1:
Input:
```bash
+
1
```
selanjutnya program akan menampilkan:
```bash
+
1
1
```
kemudian lanjutkan dengan masukan berikutnya:
```bash
2
```
maka program akan menampilkan:
```bash
+
1
1
2
3
```
kemudian masukan berikutnya:
```bash
-1
```
maka keluarannya:
```bash
+
1
1
2
3
-1
0
```

### Example 2:
Input:
```bash
*
1
```
selanjutnya program akan menampilkan:
```bash
*
1
1
```
kemudian lanjutkan dengan masukan berikutnya:
```bash
2
```
maka program akan menampilkan:
```bash
*
1
1
2
2
```
kemudian masukan berikutnya:
```bash
5
```
maka keluarannya:
```bash
*
1
1
2
2
5
10

```
kemudian masukan berikutnya:
```bash
-1
```
maka keluarannya:
```bash
*
1
1
2
2
5
10
-1
0

```

Perlu diperhatikan: program ini akan keluar ketika Anda sudah melakukan input kurang dari lima ``5`` kali. 
## Reporting

Presentasikan pekerjaan anda dalam sebuah video. Pada presentasi:
1. Definisikan tipe data yang cocok dan representatif untuk setiap properti.
2. Berikan dasar pemikiran anda mengenai usulan tipe data tersebut.
3. Jabarkan solusi anda.

**Note**: Semakin tajam argumen dan penjabaran anda semakin mudah penilaian dilakukan.

**Kriteria Video Presentasi**:
+ 1080p/30fps, min. 10 menit.
+ Suara jernih dan dapat dengan jelas terdengar.
+ Posting video anda di YouTube, di-set "Not For Kids" dengan visibility Unlisted.

## Submissions:

1. t02_01.c
2. t02_02.c
3. t02_03.c
4. changelog.txt
