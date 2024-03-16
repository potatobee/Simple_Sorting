#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000000

void generateRandomNumbers(int array[], int size, int seed)
{
    srand(seed);
    for (int i = 0; i < size; i++)
    {
        array[i] = rand();
    }
}

// bubble sort
void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// selection sort
void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}

// insertion sort
void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void saveToFile(char *filename, int array[], int size, char *type, char *sort_type)
{
    FILE *file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return;
    }

    if (type == "unsorted")
    {
        fprintf(file, "Ukuran angka %d\n", size);
        fprintf(file, "%s:\n", sort_type);
        fprintf(file, "Angka Tidak Terurut : ");
    }
    else if (type == "sorted")
    {
        fprintf(file, "Angka Terurut : ");
    }

    for (int i = 0; i < size; i++)
    {
        fprintf(file, "%d ", array[i]);
    }
    fprintf(file, "\n");

    fclose(file);
}

int main()
{
    int numbers[MAX_SIZE];
    int size = 100000;
    int seed = time(NULL); 

    // membuat angka acak sekali di awal
    generateRandomNumbers(numbers, MAX_SIZE, seed);

    printf("----------------------------------------------------------------------------------\n");
    printf("||Jenis Algoritma\t|| Jumlah Bilangan\t|| Waktu Eksekusi (ms)\t\t||\n");
    printf("----------------------------------------------------------------------------------\n");

    for (int i = 0; i < 10; i++) // 10 iterasi untuk menguji dari 100,000 hingga 1,000,000 dengan penambahan 100,000 setiap iterasi
    {
        clock_t start, end;
        double cpu_time_used;

        // pengujian untuk bubble sort
        start = clock();
        bubbleSort(numbers, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;

        if (size == 100000)
        {
            printf("||Bubble Sort\t\t|| %d\t\t|| %.2f\t\t\t||\n", size, cpu_time_used);
            printf("||                      ----------------------------------------------------------\n");
        }
        else if (size == 1000000)
        {
            printf("||                      || %d\t\t|| %.2f\t\t\t||\n", size, cpu_time_used);
            printf("----------------------------------------------------------------------------------\n");
        }
        else
        {
            printf("||                      || %d\t\t|| %.2f\t\t\t||\n", size, cpu_time_used);
            printf("||                      ----------------------------------------------------------\n");
        }

        saveToFile("numbers.txt", numbers, size, "unsorted", "Bubble Sort");
        saveToFile("numbers.txt", numbers, size, "sorted", "Bubble Sort");

        size += 100000; // Meningkatkan ukuran array untuk iterasi selanjutnya
    }

    // mengatur ulang ukuran array ke nilai awal
    size = 100000;
    for (int i = 0; i < 10; i++)
    {
        clock_t start, end;
        double cpu_time_used;

        // pengujian untuk selection sort
        start = clock();
        selectionSort(numbers, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        if (size == 100000)
        {
            printf("||Selection Sort        || %d\t\t|| %.2f\t\t\t||\n", size, cpu_time_used);
            printf("||                      ----------------------------------------------------------\n");
        }
        else if (size == 1000000)
        {
            printf("||                      || %d\t\t|| %.2f\t\t\t||\n", size, cpu_time_used);
            printf("----------------------------------------------------------------------------------\n");
        }

        else
        {
            printf("||                      || %d\t\t|| %.2f\t\t\t||\n", size, cpu_time_used);
            printf("||                      ----------------------------------------------------------\n");
        }

        saveToFile("numbers.txt", numbers, size, "unsorted", "Selection Sort");
        saveToFile("numbers.txt", numbers, size, "sorted", "Selection Sort");

        size += 100000;
    }

    // mengatur ulang ukuran array ke nilai awal
    size = 100000;
    for (int i = 0; i < 10; i++)
    {
        clock_t start, end;
        double cpu_time_used;

        // pengujian untuk insertion sort
        start = clock();
        insertionSort(numbers, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        if (size == 100000)
        {
            printf("||Insertion Sort        || %d\t\t|| %.2f\t\t\t\t||\n", size, cpu_time_used);
            printf("||                      ----------------------------------------------------------\n");
        }
        else if (size == 1000000)
        {
            printf("||                      || %d\t\t|| %.2f\t\t\t\t||\n", size, cpu_time_used);
            printf("----------------------------------------------------------------------------------\n");
        }
        else
        {
            printf("||                      || %d\t\t|| %.2f\t\t\t\t||\n", size, cpu_time_used);
            printf("||                      ----------------------------------------------------------\n");
        }

        saveToFile("numbers.txt", numbers, size, "unsorted", "Insertion Sort");
        saveToFile("numbers.txt", numbers, size, "sorted", "Insertion Sort");

        size += 100000;
    }
    return 0;
}
