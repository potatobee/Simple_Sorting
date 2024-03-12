#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fungsi untuk menghasilkan bilangan acak
void generateRandomNumbers(int *arr, int n) {
    srand(time(NULL)); // Inisialisasi seed acak
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000000; // Menghasilkan bilangan acak antara 0 dan 999999
    }
}

// Fungsi untuk melakukan bubble sort
void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Menukar arr[j] dan arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Fungsi untuk melakukan selection sort
void selectionSort(int *arr, int n) {
    int minIndex;
    for (int i = 0; i < n-1; i++) {
        minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Menukar arr[i] dan arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Fungsi untuk melakukan insertion sort
void insertionSort(int *arr, int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Memindahkan elemen arr[0..i-1] yang lebih besar dari key ke posisi setelahnya
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

// Fungsi untuk menulis bilangan terurut dan tidak terurut ke dalam file
void writeToFile(int *arr, int n, char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d\n", arr[i]);
    }
    fclose(file);
}

// Fungsi untuk mencetak tabel hasil eksekusi
void printExecutionTimeTable() {
    int n = 1000000; // Jumlah maksimum bilangan integer
    int step = 100000; // Ukuran langkah penambahan jumlah bilangan
    clock_t start, end;
    double time_taken;

    printf("Jenis Algoritma\tJumlah Bilangan\tWaktu Eksekusi (ms)\n");

    for (int i = step; i <= n; i += step) {
        int *arr = (int *)malloc(i * sizeof(int));
        generateRandomNumbers(arr, i);

        // Bubble Sort
        start = clock();
        bubbleSort(arr, i);
        end = clock();
        time_taken = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;
        printf("Bubble Sort\t%dk\t\t%.2f\n", i/1000, time_taken);

        writeToFile(arr, i, "bubble_sorted.txt");

        // Selection Sort
        start = clock();
        selectionSort(arr, i);
        end = clock();
        time_taken = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;
        printf("Selection Sort\t%dk\t\t%.2f\n", i/1000, time_taken);

        writeToFile(arr, i, "selection_sorted.txt");

        // Insertion Sort
        start = clock();
        insertionSort(arr, i);
        end = clock();
        time_taken = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;
        printf("Insertion Sort\t%dk\t\t%.2f\n", i/1000, time_taken);

        writeToFile(arr, i, "insertion_sorted.txt");

        free(arr);
    }
}

int main() {
    printExecutionTimeTable();
    return 0;
}
