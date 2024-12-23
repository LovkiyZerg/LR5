#include <iostream>
#include "Header.h"


const int N = 4;

int main()
{
    setlocale(LC_ALL, "Russian");
    int execute = 0;
    do {
        system("CLS");
        std::cout << "Создать двумерный динамический массив вещественных чисел. Определить,\nвстречаются ли среди них элементы с нулевым значением.Если встречаются\nтакие элементы, то определить их индексы и общее количество.Переставить\nэлементы этого массива в обратном порядке и вывести на экран.\nИспользовать функции.\n" << std::endl;
        std::cout << "Выполнил Багаев Леонид\n" << std::endl;
        double** array = new double* [N];
        for (int i = 0; i < N; ++i) {
            array[i] = new double[N] {0,4,5,0};
        }
        int num_of_zeroes = 0;
        int* indexes = zeroes_indexes(array, N, &num_of_zeroes);
        std::cout << "Количество нулей: " << num_of_zeroes << std::endl;
        std::cout << "Индексы нулей:    ";
        for (int p = 0; p < num_of_zeroes*2; p += 2) {
            std::cout << "i = " << indexes[p] << "  j = " << indexes[p + 1] << "    ";
        }
        std::cout << "\nЭлементы массива в обратном порядке: " << std::endl;
        for (int i = 3; i >= 0; --i) {
            for (int j = 3; j >= 0; --j) {
                std::cout << array[i][j] << " ";
            }
            std::cout << std::endl;
        }

        for (int i = 0; i < N; ++i) {
            delete[] array[i];
            array[i] = nullptr;
        }
        delete[] array;
        array = nullptr;

        delete[] indexes;
        indexes = nullptr;

        std::cout << "\nЧтобы повторить выполнение программы, введите 1" << '\n' << "Чтобы закончить выполнение программы, введите 0" << std::endl;
        get_execute(&execute);
    } while (execute == 1);
}



 