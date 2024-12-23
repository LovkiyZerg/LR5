#include <iostream>
#include <cmath>
#include <Windows.h>
#include "../DynamicLib/Header.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	int execute = 0;
    HINSTANCE load;
    load = LoadLibrary(L"DynamicLib.dll");
    typedef void (*g_int) (int*);
    g_int get_execute;
    g_int get_int;
    get_execute = (g_int)GetProcAddress(load, "get_execute");
    get_int = (g_int)GetProcAddress(load, "get_int");
    typedef void (*g_double) (double*);
    g_double get_double;
    get_double = (g_double)GetProcAddress(load, "get_double");
    typedef bool (*find_sin) (double*, int, int);
    find_sin find_positive_sin;
    find_positive_sin = (find_sin)GetProcAddress(load, "find_positive_sin");


	do {
        system("CLS");
		std::cout << "Для заданного одномерного массива A из N элементов проверить, что\nсуществует, по крайней мере, один элемент Ai, для которого выполняется\nусловие sin Ai > 0. Рекурсивную функцию применять отдельно для каждой из\nполовин массива. Рекурсивные вызовы заканчивать, когда останется только\nодин элемент." << std::endl;
		std::cout << "\nВыполнил Багаев Леонид\nВариант 1\n" << std::endl;
        const double N = 10;
        double* A = new double[N] {pi/2,2,pi/6,4,5,6,pi/12,8,9,10};
        std::cout << "Данный массив:   ";
        for (int i = 0; i < N; ++i) {
            std::cout << A[i] << " ";
        }
        std::cout << std::endl;
        if (find_positive_sin(A, 0, 4) == 1 || find_positive_sin(A, 5, 9) == 1) {
            std::cout << "Положительный синус существует" << std::endl;
        }
        else {
            std::cout << "Положительного синуса НЕ существует";
        }
        delete[] A;
        A = nullptr;
		std::cout << "\nЧтобы повторить выполнение программы, введите 1" << '\n' << "Чтобы закончить выполнение программы, введите 0" << std::endl;
		get_execute(&execute);
	} while (execute == 1);
    FreeLibrary(load);
}
