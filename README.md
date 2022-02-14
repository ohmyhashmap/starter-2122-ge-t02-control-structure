# T02 Control Structe

## Tugas 1 (t02_01.c, 40 points)
Toko yang di rintis Ucok dan Butet sejak dulu sudah semakin berkembang. Menjadi enterpreneur yang di cita-citakan sejak dulu sudah terwujud. Namun tidak cukup sampai disana, akhir-akhir ini Ucok sedang memikirkan sesuatu, suatu ide besar untuk menarik minat pelanggan. Kemudian Butet hadir dengan hasil riset yang dilakukannya beberapa minggu terakhir. Butet terinspirasi dari beberapa toko online yang penjualannya bisa mencapai ratusan buku per bulannya. Kemudian Butet memberitahu Ucok bahwa toko yang mereka rintis harus memberikan layanan dan penawaran terbaik bagi pelanggannya. Dari riset yang dilakukan Butet, penawaran terbaik dapat diwujudkan melalui pemberian diskon. 
Setelah dipikir-pikir, pemberian diskon merupakan ide yang luar biasa, Ucok pun setuju. Dari hasil diskusi yang mereka lakukan, maka didapatkan kesimpulan:
1. Setiap pembelian buku diatas 50000 akan diberi potongan harga sebanyak 5%
2. Setiap pembelian diatas atau sama dengan 100000 maka akan diberi potongan harga 10% 
3. Setiap pembelian diatas 500000 akan diberi potongan 15%. 

Untuk mewujudkan ide cemerlang ini, Ucok dan Butet memerlukan bantuan Anda untuk membangun sebuah program yang membaca jumlah buku yang dibeli dan harganya. Berdasarkan masukan tersebut maka akan dihasilkan dua baris keluaran berupa total potongan yang didapatkan dan total yang akan dibayar setelah mendapatkan potongan. Perhatikan Example 1 dan Example 2.

### Example 1
Input:

```bash
5
50000

```
Output:
```bash
25000.00
225000.00
```

### Example 2
Apabila tidak ada potongan yang diperoleh, maka output untuk total potongan yang akan ditampilkan akan digantikan dengan ```---``` (trippled dashes)
Input:

```bash
3
5000
```
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

Selain itu, sang ahli gizi juga mengkategorikan menu makanan 4 sehat 5 sempurna tersebut:
1. you need side dishes, apabila kamu hanya makan makanan pokok.
2. you need vegetables, apabila kamu hanya makan makanan pokok dan lauk pauk.
3. good, apabila kamu memakan sayur.
4. very good, apabila kamu memakan buah.
5. perfect, apabila kamu menambah susu.

Setelah mendengar penjelasan sang ahli gizi, Ucok jadi ingin mengembangkan sebuah program yang menampilkan kategori menu makanan 4 sehat 5 sempurna tersebut.
Tugas Anda adalah membantu Ucok untuk mewujudkan keinginannya. Perhatikan Example 1 dan Example 2.


### Example 1
Input:

```bash
1
```

Output:

```bash
staple food
you need side dishes
```

### Example 2
Input 2:

```bash
3
```

Output:

```bash
vegetables
side dishes
staple food
good
```


## Tugas 3 (t02_02.c, 40 points)

### Soal Cerita On Progress

masukan untuk baris pertama merupakan ``mode`` operasi yang dipilih, masukan baris kedua merupakan bilangan pertama yang akan dioperasikan:
```bash
+
1

```
maka keluarannya:
```bash
1

```
kemudian lanjutkan dengan masukan berikutnya:
```bash
2

```
maka keluarannya:
```bash
3

```
kemudian masukan berikutnya:
```bash
-1
```
maka keluarannya:
```bash
0
```
Program ini akan keluar ketika Anda sudah melakukan input kurang dari lima ``5`` kali. 
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
