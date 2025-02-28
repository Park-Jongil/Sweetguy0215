#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generate_random_numbers(int arr[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Generate random numbers between 0 and 99
    }
}

void sort_numbers(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_numbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[SIZE];

    generate_random_numbers(numbers, SIZE);
    printf("Generated numbers: ");
    print_numbers(numbers, SIZE);

    sort_numbers(numbers, SIZE);
    printf("Sorted numbers: ");
    print_numbers(numbers, SIZE);

    return 0;
}