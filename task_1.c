// Задача 1. Сортировка по возрастанию
// Написать только одну функцию, которая сортирует массив по возрастанию.
// Необходимо реализовать только одну функцию, всю программу составлять не
// надо.
// Строго согласно прототипу. Имя функции и все аргументы должны быть:
// void sort_array(int size, int a[])
// Всю программу загружать не надо, только одну эту функцию. Можно просто
// закомментировать текст всей программы, кроме данной функции.
// Данные на входе: Функция принимает на вход, первый аргумент - размер
// массива, второй аргумент - адрес нулевого элемента.
// Данные на выходе: Функция ничего не возвращает. Производит
// сортировку переданного ей массива по возрастанию.
// Пример №1
// Данные на входе: 20 19 4 3 2 1 18 17 13 12 11 16 15 14 10 9 8 7 6 5
// Данные на выходе: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// Пример №2
// Данные на входе: 5 4 3 2 1
// Данные на выходе: 1 2 3 4 5

/* *** *** *** */

// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_SIZE 5

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

void sort_array(int size, int a[]) {
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// int main(void) {
//     int *my_arr = read_numbers();
//     sort_array(MAX_SIZE, my_arr);
//     print_arr(my_arr, MAX_SIZE);
//     free(my_arr);

//     return 0;
// }