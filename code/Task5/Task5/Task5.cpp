#include <iostream>
#include "Header.h"

//const int N = 4;

int main()
{
    setlocale(LC_ALL, "Russian");
    int execute = 0;
    do {
        system("CLS");
        std::cout << "Дан двумерный динамический массив целых чисел. Значения элементов\nданного массива ввести с клавиатуры.Создать динамический массив из\nэлементов, расположенных в четных столбцах данного массива и имеющих\nнечетное значение.Вычислить среднее арифметическое элементов\nдинамического массива.Вывести результат на экран.Использовать функции.\n" << std::endl;
        std::cout << "Выполнил Багаев Леонид\n" << std::endl;
        int** array = new int* [N];
        for (int i = 0; i < N; ++i) {
            array[i] = new int[N];
        }
        std::cout << "Дан массив " << N << "x" << N << ".Введите "<<  N*N << " элементов." << std::endl;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                get_int(&array[i][j]);
            }
        }

        int res_array_size = 0;
        int* res_array = even_col_odd_val(array, N, &res_array_size);
        std::cout << "Нечётные значения в чётных столбцах: ";
        for (int i = 0; i < res_array_size; ++i) {
            std::cout << res_array[i] << " ";
        }
        std::cout << "\nСреднее арифметическое всех элементов начального массива: " << arithmetic_mean(array, N);

        for (int i = 0; i < N; ++i) {
            delete[] array[i];
            array[i] = nullptr;
        }
        delete[] array;
        array = nullptr;
        delete res_array;
        res_array = nullptr;

        std::cout << "\nЧтобы повторить выполнение программы, введите 1" << '\n' << "Чтобы закончить выполнение программы, введите 0" << std::endl;
        get_execute(&execute);
    } while (execute == 1);
}
