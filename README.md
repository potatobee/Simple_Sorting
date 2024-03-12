# Simple_Sorting

# 2208107010051_Simple_Sorting

## Deskripsi
Repositori ini berisi kode program sederhana dalam bahasa pemrograman C untuk melakukan pengurutan (sorting) menggunakan tiga algoritma berbeda: bubble sort, selection sort, dan insertion sort.

## Cara Menjalankan Kode Program
Untuk menjalankan kode program pada sistem macOS, Berikut adalah cara menjalankan kode program di macOS:

1. Pastikan Compiler C Terinstal: Pastikan Anda memiliki kompiler C yang terinstal di macOS Anda. Secara default, macOS biasanya dilengkapi dengan kompiler Clang. Anda dapat memverifikasi apakah Clang sudah terinstal dengan membuka Terminal dan menjalankan perintah `clang --version`.

2. Buka Terminal: Buka Terminal di macOS. Anda dapat menemukan Terminal di folder "Utilities" di dalam folder "Applications".

3. Arahkan ke Direktori Kode Program: Gunakan perintah `cd` untuk berpindah ke direktori yang berisi kode program Anda. Misalnya, jika kode program Anda disimpan di folder "Documents", Anda dapat menggunakan perintah berikut di Terminal:
   ```
   cd Documents
   ```

4. Compile Kode Program: Setelah berada di direktori yang sesuai, Anda dapat menggunakan kompiler C untuk mengompilasi kode program. Misalnya, jika nama file program Anda adalah `2208107010051_Simple_Sorting.c`, Anda dapat menggunakan perintah berikut untuk mengompilasi:
   ```
   clang 2208107010051_Simple_Sorting.c -o 2208107010051_Simple_Sorting
   ```
   Ini akan menghasilkan file eksekusi dengan nama `2208107010051_Simple_Sorting` di direktori yang sama.

5. Jalankan Kode Program: Setelah berhasil dikompilasi, Anda dapat menjalankan file eksekusi dengan mengetikkan nama filenya di Terminal dan menekan Enter. Misalnya:
   ```
   ./2208107010051_Simple_Sorting
   ```


Berikut adalah deskripsi singkat tentang fungsi-fungsi yang digunakan dalam kode program `2208107010051_Simple_Sorting.c`, yang dapat Anda tambahkan ke dalam README.md:

1. `generateRandomNumbers(int *arr, int n)`: Fungsi ini digunakan untuk menghasilkan bilangan acak dalam array dengan panjang `n`. Fungsi ini menerima dua parameter, yaitu array `arr` yang akan diisi dengan bilangan acak, dan `n` yang merupakan panjang array tersebut.

2. `bubbleSort(int *arr, int n)`: Fungsi ini melakukan pengurutan array menggunakan algoritma bubble sort. Fungsi ini menerima dua parameter, yaitu array `arr` yang akan diurutkan, dan `n` yang merupakan panjang array tersebut.

3. `selectionSort(int *arr, int n)`: Fungsi ini melakukan pengurutan array menggunakan algoritma selection sort. Fungsi ini menerima dua parameter, yaitu array `arr` yang akan diurutkan, dan `n` yang merupakan panjang array tersebut.

4. `insertionSort(int *arr, int n)`: Fungsi ini melakukan pengurutan array menggunakan algoritma insertion sort. Fungsi ini menerima dua parameter, yaitu array `arr` yang akan diurutkan, dan `n` yang merupakan panjang array tersebut.

5. `writeToFile(int *arr, int n, char *filename)`: Fungsi ini digunakan untuk menulis array ke dalam file dengan nama yang ditentukan. Fungsi ini menerima tiga parameter, yaitu array `arr` yang akan ditulis ke dalam file, `n` yang merupakan panjang array tersebut, dan `filename` yang merupakan nama file tujuan.
