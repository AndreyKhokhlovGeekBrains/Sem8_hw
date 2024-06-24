// Задача 6. Больше среднего
// Определить количество положительных элементов квадратной матрицы,
// превышающих по величине среднее арифметическое всех элементов главной
// диагонали. Реализовать функцию среднее арифметическое главной
// диагонали.
// Данные на входе: 5 строк по 5 целых чисел через пробел
// Данные на выходе: Одно целое число
// Пример
// Данные на входе: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
// Данные на выходе: 10

/* *** *** *** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 25

void print_arr(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int* read_numbers(void) {
    int* temp_arr = (int*)malloc(MAX_SIZE * sizeof(int));
    int n;
    printf("Enter the numbers:\n");
    for(int i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &n);
        temp_arr[i] = n;
    }

    return temp_arr;
}

int count_positive_elements_above_diagonal_average(int size, int a[]) {
    int matrix_size = sqrt(size);
    int diagonal_sum = 0;
    int count = 0;

    for(int i = 0; i < size; i += matrix_size + 1) {
        diagonal_sum += a[i];
    }

    int diagonal_average = diagonal_sum / matrix_size;

    for(int i = 0; i < size; i++) {
        if(a[i] > 0 && a[i] > diagonal_average) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int *my_arr = read_numbers();
    printf("%d", count_positive_elements_above_diagonal_average(MAX_SIZE, my_arr));
    free(my_arr);

    return 0;
}