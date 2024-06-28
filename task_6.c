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

#define MAX_SIZE 5

void print_quadratic_arr(int **arr, int size) {
    for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
}

int** read_numbers(void) {
    // Allocate memory for an array of pointers
    int** temp_arr = (int**)malloc(MAX_SIZE * sizeof(int*));
    // Allocate memory for each row
    for(int i = 0; i < MAX_SIZE; i++) {
        temp_arr[i] = (int*)malloc(MAX_SIZE * sizeof(int));
    }

    printf("Enter the numbers:\n");

    for(int i = 0; i < MAX_SIZE; i++) {
        for(int j = 0; j < MAX_SIZE; j++) {
            scanf("%d", &temp_arr[i][j]);
        }
    }

    return temp_arr;
}

int count_positive_elements_above_diagonal_average(int size, int **a) {
    int diagonal_sum = 0;
    int count = 0;

    for(int i = 0; i < size; i ++) {
        diagonal_sum += a[i][i];
    }

    int diagonal_average = diagonal_sum / size;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(a[i][j] > 0 && a[i][j] > diagonal_average) {
            count++;
            }
        }     
    }
    return count;
}

int main(void) {
    int** my_arr = read_numbers();
    // print_quadratic_arr(my_arr, MAX_SIZE);

    printf("%d", count_positive_elements_above_diagonal_average(MAX_SIZE, my_arr));

    for(int i = 0; i < MAX_SIZE; i++) {
        free(my_arr[i]);
    }
    free(my_arr);

    return 0;
}