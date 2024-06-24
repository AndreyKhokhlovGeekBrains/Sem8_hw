// Задача 7*. Клетки
// Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х
// цветов, например, черного и белого (см. рисунок). Каждая клетка имеет
// координату, состоящую из буквы и цифры. Горизонтальное расположение
// клетки определяется буквой от A до H, а вертикальное – цифрой от 1 до 8.
// Заметим, что клетка с координатой А1 имеет черный цвет. Требуется по
// заданной координате определить цвет клетки.
// Данные на входе: В единственной строке входного файла записана
// координата клетки на шахматной доске: всего два символа – буква и цифра
// (без пробелов).
// Данные на выходе: В выходной файл нужно вывести «WHITE», если
// указанная клетка имеет белый цвет и «BLACK», если она черная.
// Пример №1
// Данные на входе: C3
// Данные на выходе: BLACK
// Пример №2
// Данные на входе: G8
// Данные на выходе: WHITE

#include <stdio.h>

void color_of_checkerboard(char* string) {
    char row = (string[0] - 'A') + 1;
    int col = string[1] - '0';

    if((row % 2 == 0 && col % 2 == 0) || (row % 2 != 0 && col % 2 != 0)) {
        printf("BLACK\n");
    } else {
        printf("WHITE\n");
    }
}

int main(void) {
    char input[3];
    printf("Enter the coordinates of a checkerboard (e.g., A1):\n");
    scanf("%2s", input);

    color_of_checkerboard(input);

    return 0;
}