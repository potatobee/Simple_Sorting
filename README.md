# Simple_Sorting

# 2208107010051_Simple_Sorting

## Deskripsi
Program ini adalah contoh implementasi sederhana dari algoritma sorting dalam bahasa pemrograman C. Program ini mengimplementasikan tiga jenis algoritma sorting yang umum digunakan, yaitu:
- Bubble Sort
- Selection Sort
- Insertion Sort

Program akan menghasilkan dan mengurutkan serangkaian bilangan acak, dan kemudian mengukur waktu eksekusi dari setiap algoritma sorting untuk berbagai ukuran masukan.

## Cara Menjalankan Program
1. Pastikan Anda memiliki compiler C yang terinstal di sistem, seperti GCC.
2. Clone repositori ini ke dalam direktori lokal dengan menggunakan perintah:
    ```
    git clone https://github.com/nama_pengguna/2208107010051_Simple_Sorting.git
    ```
3. Masuk ke direktori yang telah di-clone:
    ```
    cd 2208107010051_Simple_Sorting
    ```
4. Compile program dengan menggunakan compiler C:
    ```
    gcc 2208107010051_Simple_Sorting.c -o 2208107010051_Simple_Sorting
    ```
5. Jalankan program yang telah dikompilasi:
    ```
    ./2208107010051_Simple_Sorting
    ```
6. Tunggu program menyelesaikan pengujian. Hasil pengujian akan ditampilkan di layar dan juga disimpan dalam file "numbers.txt".

## Fungsi dalam Kode Program

1. `generateRandomNumbers`: Fungsi ini digunakan untuk menghasilkan bilangan acak dan mengisinya ke dalam array. Parameter yang diterima adalah array untuk menyimpan bilangan acak, ukuran array, dan seed untuk menghasilkan bilangan acak.

2. `bubbleSort`: Fungsi ini mengurutkan array menggunakan algoritma Bubble Sort. Ini membandingkan setiap pasangan elemen berturut-turut dan menukarnya jika diperlukan.

3. `selectionSort`: Fungsi ini mengurutkan array menggunakan algoritma Selection Sort. Ini mencari elemen terkecil dari sisa array yang belum diurutkan dan menukarnya dengan elemen pertama dari array yang belum diurutkan.

4. `insertionSort`: Fungsi ini mengurutkan array menggunakan algoritma Insertion Sort. Ini menyisipkan setiap elemen dari array yang belum diurutkan ke dalam posisi yang tepat dalam array yang sudah diurutkan.

5. `saveToFile`: Fungsi ini digunakan untuk menyimpan array ke dalam file teks. Ini menerima nama file, array, ukuran array, jenis array ("terurut" atau "belum terurut"), dan jenis pengurutan.

6. `main`: Fungsi utama dari program. Ini menginisialisasi array, melakukan pengujian untuk setiap algoritma pengurutan dengan ukuran array yang berbeda, mengukur waktu eksekusi, dan menyimpan hasilnya ke dalam file serta mencetak tabel waktu eksekusi ke layar.

## Catatan
- Program ini akan menghasilkan output dalam file "numbers.txt". Pastikan memiliki izin menulis ke direktori tempat program berjalan.

