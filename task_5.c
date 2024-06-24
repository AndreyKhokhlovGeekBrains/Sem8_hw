// Задача 5. Поменять местами
// Составить функцию, которая меняет в массиве минимальный и максимальный
// элемент местами. Прототип функции
// void change_max_min(int size, int a[])
// Данные на входе: Функция принимает на вход размер массива и
// массив чисел типа int
// Данные на выходе: Функция не возвращает значения, измененный
// массив сохраняется на месте исходного.
// Пример
// Данные на входе: 1 2 3 4 5 6 7 8 9 10
// Данные на выходе: 10 2 3 4 5 6 7 8 9 1

/* *** *** *** */

// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_SIZE 10

// void print_arr(int *arr, int size) {
//     for(int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
// }

// int* read_numbers(void) {
//     int* temp_arr = (int*)malloc(MAX_SIZE * sizeof(int));
//     int n;
//     printf("Enter the numbers:\n");
//     for(int i = 0; i < MAX_SIZE; i++)
//     {
//         scanf("%d", &n);
//         temp_arr[i] = n;
//     }

//     return temp_arr;
// }

void change_max_min(int size, int a[]) {
    int maxIndex = 0;
    int minIndex = 0;
    int maxValue = a[0];
    int minValue = a[0];

    for(int i = 1; i < size; i++) {
        if(maxValue < a[i]) {
            maxIndex = i;
            maxValue = a[i];
        }
        if(minValue > a[i]) {
            minIndex = i;
            minValue = a[i];
        }
    }

    int temp = a[maxIndex];
    a[maxIndex] = a[minIndex];
    a[minIndex] = temp;
}

// int main(void) {
//     int *my_arr = read_numbers();
//     change_max_min(MAX_SIZE, my_arr);
//     print_arr(my_arr, MAX_SIZE);
//     free(my_arr);

//     return 0;
// }