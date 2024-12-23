#include <iostream>
#include "Header.h";

int main()
{
    setlocale(LC_ALL, "Russian");
    int execute = 0;
    //ax+b=0
    do {
        system("CLS");
        std::cout << "Составить программу для решения уравнения aix + bj = 0, , где ai и bj\n– элементы динамических массивов, i = 0, 1, ..., 7, j = 0, 1, ..., 7. Массивы A =\na0, a1, ..., a7 и B = b0, b1, ..., b7 ввести с клавиатуры.При ai != 0 вывести на\nэкран результат, а при ai = 0 переменной x присвоить значение 0, которое\nтакже вывести на экран.Использовать функции, размерность массивов ввести\nс клавиатуры, исходные данные ввести с клавиатуры." << std::endl;
        std::cout << "\n Выполнил Багаев Леонид" << std::endl;
        std::cout << "Вариант 1" << std::endl;
        int N;
        std::cout << "\nВведите размер массивов" << std::endl;
        get_int(&N);
        double* A = new double[N];
        double* B = new double[N];
        std::cout << "Введите элементы первого массива" << std::endl;
        for (int i = 0; i < N; ++i) {
            get_double(&A[i]);
        }
        std::cout << "Введите элементы второго массива" << std::endl;
        for (int i = 0; i < N; ++i) {
            get_double(&B[i]);
        }
        double* res = new double[N];
        solve_equation(A, B, res, N);
        std::cout << "x =   ";
        for (int i = 0; i < N; ++i) {
            std::cout << res[i] << " ";
        }
        delete[] A;
        A = nullptr;
        delete[] B;
        B = nullptr;
        delete[] res;
        res = nullptr;
        std::cout << "\nЧтобы повторить выполнение программы, введите 1" << '\n' << "Чтобы закончить выполнение программы, введите 0" << std::endl;
        get_execute(&execute);
    } while (execute == 1);
}



