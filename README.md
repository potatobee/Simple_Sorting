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
1. `generateRandomNumbers(int array[], int size, int seed)`: Menghasilkan serangkaian angka acak dengan ukuran tertentu.
2. `bubbleSort(int array[], int size)`: Mengurutkan serangkaian angka menggunakan algoritma Bubble Sort.
3. `selectionSort(int array[], int size)`: Mengurutkan serangkaian angka menggunakan algoritma Selection Sort.
4. `insertionSort(int array[], int size)`: Mengurutkan serangkaian angka menggunakan algoritma Insertion Sort.
5. `saveToFile(char *filename, int array[], int size, char *type, char *sort_type)`: Menyimpan serangkaian angka ke dalam file dengan format tertentu.

## Catatan
- Program ini akan menghasilkan output dalam file "numbers.txt". Pastikan memiliki izin menulis ke direktori tempat program berjalan.

