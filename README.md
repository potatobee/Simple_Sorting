# Simple_Sorting

# 2208107010051_Simple_Sorting

## Deskripsi
Repositori ini berisi kode program sederhana dalam bahasa pemrograman C untuk melakukan pengurutan (sorting) menggunakan tiga algoritma berbeda: bubble sort, selection sort, dan insertion sort.

## Cara Menjalankan Kode Program

How to run the Park Ticketing Management System Project (PTMS)
1. Download the zip file

2. Extract the file and copy ptms folder

3.Paste inside root directory(for xampp xampp/htdocs, for wamp wamp/www, for lamp var/www/html)

4. Open PHPMyAdmin (http://localhost/phpmyadmin)

5. Create a database with name ptmsdb

6. Import ptmsdb.sql file(given inside the zip package in SQL file folder)

7.Run the script http://localhost/ptmms

Admin Credential

Username: admin
Password: Test@123

Fungsi-fungsi yang digunakan dalam kode program `2208107010051_Simple_Sorting.c`:

1. `generateRandomNumbers(int array[], int size, int seed)`: Fungsi ini digunakan untuk mengisi array dengan bilangan acak menggunakan fungsi `rand()`. Fungsi ini memiliki tiga parameter: array yang akan diisi, ukuran array, dan seed untuk fungsi `srand()`.

2. `bubbleSort(int array[], int size)`: Fungsi ini mengurutkan array menggunakan algoritma Bubble Sort. Fungsi ini memiliki dua parameter: array yang akan diurutkan dan ukuran array.

3. `selectionSort(int array[], int size)`: Fungsi ini mengurutkan array menggunakan algoritma Selection Sort. Fungsi ini memiliki dua parameter: array yang akan diurutkan dan ukuran array.

4. `insertionSort(int array[], int size)`: Fungsi ini mengurutkan array menggunakan algoritma Insertion Sort. Fungsi ini memiliki dua parameter: array yang akan diurutkan dan ukuran array.

5. `saveToFile(char *filename, int array[], int size, char *type, char *sort_type)`: Fungsi ini menyimpan array ke dalam file teks. Fungsi ini memiliki lima parameter: nama file tujuan, array yang akan disimpan, ukuran array, jenis array ("unsorted" untuk array sebelum diurutkan, "sorted" untuk array setelah diurutkan), dan jenis pengurutan yang digunakan.

6. `main()`: Fungsi utama dari program yang mengatur proses pengujian performa algoritma sorting, mencetak output informasi waktu eksekusi, dan menyimpan hasil evaluasi ke dalam file teks.
