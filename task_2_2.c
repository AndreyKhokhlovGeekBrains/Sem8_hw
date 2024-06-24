// Задача 2. Четные в начало
// Написать только одну функцию, которая ставит в начало массива все четные
// элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
// между собой. Строго согласно прототипу:
// void sort_even_odd(int n, int a[])
// Данные на входе: Функция принимает на вход целые числа
// Данные на выходе: Отсортированный исходный массив
// Пример №1
// Данные на входе: 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
// Данные на выходе: 20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3
// 1
// Пример №2
// Данные на входе: 1 0 1 0 1
// Данные на выходе: 0 0 1 1 1

/* *** *** *** */

// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_SIZE 20

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

void sort_even_odd(int n, int a[]) {
    int oddIndex = 0;
    int evenIndex = 0;

    // Find the first odd number index
    while (oddIndex < n && a[oddIndex] % 2 == 0) {
        oddIndex++;
    }

    evenIndex = oddIndex + 1;

    // Iterate through the array
    while (evenIndex < n) {
        // Find the next even number index
        while (evenIndex < n && a[evenIndex] % 2 != 0) {
            evenIndex++;
        }

        // If we found an even number and there's an odd number before it
        if (evenIndex < n && oddIndex < evenIndex) {
            // Store the even number
            int temp = a[evenIndex];

            // Shift all elements between oddIndex and evenIndex to the right by 1
            for (int k = evenIndex; k > oddIndex; k--) {
                a[k] = a[k - 1];
            }

            // Place the even number at the oddIndex
            a[oddIndex] = temp;

            // Move oddIndex to the next odd number position
            oddIndex++;
        }

        // Move to the next element
        evenIndex++;
    }
}

// int main(void) {
//     int *my_arr = read_numbers();
//     sort_even_odd(MAX_SIZE, my_arr);
//     print_arr(my_arr, MAX_SIZE);
//     free(my_arr);

//     return 0;
// }