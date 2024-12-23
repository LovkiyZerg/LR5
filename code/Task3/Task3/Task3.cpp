
#include <iostream>
#include "Header.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    int execute = 0;
    do {
        system("CLS");
        std::cout << "Дан двумерный динамический массив целых чисел А размерностью n x k.\nРазмерность массива ввести с клавиатуры.Значения элементов массива ввести\nс клавиатуры.Создать динамический массив из элементов, расположенных на\nглавной диагонали матрицы и имеющих четное значение.Вычислить\nпроизведение элементов динамического массива.Созданный массив и\nрезультат произведения вывести на экран.Использовать функции." << std::endl;
        std::cout << "\nВыполнил Багаев Леонид\n" << std::endl;
        int n, k;
        std::cout << "Введите количество строчек в массиве" << std::endl;
        get_int(&n);
        std::cout << "Введите количество столбцов в массиве" << std::endl;
        get_int(&k);
        int** array = new int* [n];
        for (int i = 0; i < n; ++i) {
            array[i] = new int[k];
        }
        std::cout << "Введите значения элементов массива" << std::endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < k; ++j) {
                get_int(&array[i][j]);
            }
        }
        int res_size = 0;
        int* result = diag_even_elements(array, n, k, &res_size);
        std::cout << "Чётные значения на главной диагонали матрицы: ";
        for (int i = 0; i < res_size; ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << "\nПроизведение всех элементов массива: " << multiplication_of_array(result, 0, res_size) << std::endl;
        for (int i = 0; i < n; ++i) {
            delete[] array[i];
            array[i] = nullptr;
        }
        delete[] array;
        array = nullptr;
        delete[] result;
        result = nullptr;
        

        std::cout << "\nЧтобы повторить выполнение программы, введите 1" << '\n' << "Чтобы закончить выполнение программы, введите 0" << std::endl;
        get_execute(&execute);
    } while (execute == 1);

}

